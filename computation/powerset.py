def powerset(array):
    ps = [[]]
    for i in array:
        ps += [x + [array[i]] for x in ps]
    return ps

print powerset([0, 1, 2, 3])
