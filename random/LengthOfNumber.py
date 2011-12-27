def lengthOfNumber(n):
    from math import log10, floor
    return int(floor(log10(n)+1))

print lengthOfNumber(12321)  # should give 2
