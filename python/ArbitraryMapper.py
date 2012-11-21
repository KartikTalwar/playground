def mapper(function, *params):
	rez = []
	for args in zip(*params):
		rez.append(function(*args))
	return rez

print mapper(abs, [-3, 5, -1, 42, 23])
print mapper(pow, [1, 2, 3], [2, 3, 4, 5])