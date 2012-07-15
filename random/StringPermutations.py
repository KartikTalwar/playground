def stringPermutations(string):
    rez = []

    if len(string) < 2:
        rez.append(string)
    else:
        for position in range(len(string)):
            perms = string[:position] + string[position+1:]
            for i in stringPermutations(perms):
                rez.append(string[position:position+1] + i)

    return rez

print stringPermutations('abc') # ['abc', 'acb', 'bac', 'bca', 'cab', 'cba']
