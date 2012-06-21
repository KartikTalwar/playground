newlist = sorted(arr, key=lambda k: k['keyName'])

import operator
newlist - sorted(arr, key=operator.itemgetter('keyName'))
