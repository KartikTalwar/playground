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

def parse(string):
	dict = {'H' : 0, 'A' : 0, 'C' : 0, 'K' : 0, 'E' : 0, 'R' : 0, 'C' : 0, 'U' : 0, 'P' : 0}
	for i in range(len(string)):
		if string[i] in dict:
			dict[string[i]] += 1
	return dict
		
def count(dict):
	low = min(dict.values())
	for k,v in dict.items():
		bool = False if v < low else True
	return low if bool == True else 0


import urllib

file = urllib.urlopen("https://raw.github.com/gist/1651354/67521ff0ac3332ca68713dfcd474a431c2d6c427/AlphabetSoupInput.txt")
stream = file.read().split('\n')
rez = []

for i in range(1, int(stream[0])+1):
	rez.append("Case #%d: %d" % (i, count(parse(stream[i]))))

data = "\n".join(rez)
w = open('output.txt', 'w')
w.write(data)
w.close()

