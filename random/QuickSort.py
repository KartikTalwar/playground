def qsort(list):
    return [] if list==[] else qsort([x for x in list[1:] if x < list[0]]) + [list[0]] + qsort([x for x in list[1:] if x >= list[0]])
