'''
Facebook Hacker Cup 2012 Qualification Round

Alphabet Soup
Alfredo Spaghetti really likes soup, especially when it contains alphabet pasta. Every day he constructs
a sentence from letters, places the letters into a bowl of broth and enjoys delicious alphabet soup.

Today, after constructing the sentence, Alfredo remembered that the Facebook Hacker Cup starts today! 
Thus, he decided to construct the phrase "HACKERCUP". As he already added the letters to the broth, 
he is stuck with the letters he originally selected. Help Alfredo determine how many times he can place
the word "HACKERCUP" side-by-side using the letters in his soup.

Input
The first line of the input file contains a single integer T: the number of test cases. T lines follow,
each representing a single test case with a sequence of upper-case letters and spaces: the original 
sentence Alfredo constructed.

Output
Output T lines, one for each test case. For each case, output "Case #t: n", where t is the test case 
number (starting from 1) and n is the number of times the word "HACKERCUP" can be placed side-by-side 
using the letters from the sentence.

Constraints
1 < T <= 20
Sentences contain only the upper-case letters A-Z and the space character
Each sentence contains at least one letter, and contains at most 1000 characters, including spaces
'''

import urllib
def parse(string):
	d = {'H' : 0, 'A' : 0, 'C' : 0, 'K' : 0, 'E' : 0, 'R' : 0, 'U' : 0, 'P' : 0}
	d.update({s: string.count(s) for s in string if s in d})
	d['C'] /= 2
	return min(d.values())

file = urllib.urlopen("https://raw.github.com/gist/1651354/67521ff0ac3332ca68713dfcd474a431c2d6c427/AlphabetSoupInput.txt").read().split('\n')
open('output.txt', 'w').write( "\n".join( [("Case #%d: %d" % (i, parse(file[i]))) for i in range(1, len(file))]))
