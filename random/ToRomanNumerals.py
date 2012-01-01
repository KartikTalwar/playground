def toRoman(number):
    key = ('M',  'CM', 'D', 'CD','C', 'XC','L','XL','X','IX','V','IV','I')
    val = (1000, 900,  500, 400, 100,  90, 50,  40, 10,  9,   5,  4,   1)
    result = ""
    for i in range(len(val)):
       count = int(number / val[i])
       result += key[i] * count
       number -= val[i] * count
    return result
