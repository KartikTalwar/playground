def isPrime(n):
    import re
    return re.match(r'^1?$|^(11+?)\1+$', '1' * n) == None
