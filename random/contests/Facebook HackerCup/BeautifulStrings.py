"""
Beautiful Strings

When John was a little kid he didn't have much to do. There was no internet, no Facebook,
and no programs to hack on. So he did the only thing he could... he evaluated the beauty 
of strings in a quest to discover the most beautiful string in the world.

Given a string s, little Johnny defined the beauty of the string as the sum of the beauty 
of the letters in it.

The beauty of each letter is an integer between 1 and 26, inclusive, and no two letters
have the same beauty. Johnny doesn't care about whether letters are uppercase or lowercase,
so that doesn't affect the beauty of a letter. 
(Uppercase 'F' is exactly as beautiful as lowercase 'f', for example.)

You're a student writing a report on the youth of this famous hacker. You found the string 
that Johnny considered most beautiful. What is the maximum possible beauty of this string?


Input
The input file consists of a single integer m followed by m lines.

Output
Your output should consist of, for each test case, a line containing the string "Case #x: y" 
where x is the case number (with 1 being the first case in the input file, 2 being the second, etc.)
 and y is the maximum beauty for that test case.

Constraints
5 <= m <= 50
2 <= length of s <= 500


        Example input                                        Example output

5
ABbCcc                                                       Case #1: 152
Good luck in the Facebook Hacker Cup this year!              Case #2: 754
Ignore punctuation, please :)                                Case #3: 491
Sometimes test cases are hard to make up.                    Case #4: 729
So I just go consult Professor Dalves                        Case #5: 646

"""

import re, operator, urllib2


def getScore(s):
    s = re.sub('[^A-Za-z]', '', s).lower()
    total, x, d = 0, 26, {}
    d.update({j: s.count(j) for j in s})
    data = sorted(d.iteritems(), key=operator.itemgetter(1))[::-1]

    for i in data:
        total += i[1] * x
        x -= 1

    return total


file = urllib2.urlopen('https://gist.github.com/raw/4647356/f490a1df2ccda25553c70086205e38fc7e53647e/FBHackerCupBeautifulStrings.txt').read().split('\n')
open('output.txt', 'w').write( "\n".join( [("Case #%d: %d" % (i, getScore(file[i]))) for i in range(1, len(file))][:-1]))

