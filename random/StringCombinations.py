def stringCombinations(string, right = ''):
	if not string:
		print right
		return

	stringCombinations(string[1:], string[0] + right)
	stringCombinations(string[1:], right)

stringCombinations('abcd')
