def treeToDict(xmlstring):
    from xml.etree import cElementTree as ET
    from collections import defaultdict

    t = ET.XML(xmlstring)
    d = {t.tag: {} if t.attrib else None}
    children = list(t)

    if children:
        dd = defaultdict(list)
        for dc in map(treeToDict, children):
            for k, v in dc.iteritems():
                dd[k].append(v)
        d = {t.tag: {k:v[0] if len(v) == 1 else v for k, v in dd.iteritems()}}

    if t.attrib:
        d[t.tag].update(('@' + k, v) for k, v in t.attrib.iteritems())

    if t.text:
        text = t.text.strip()
        if children or t.attrib:
            if text:
              d[t.tag]['#text'] = text
        else:
            d[t.tag] = text

    return d
