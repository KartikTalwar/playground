print 'How old are you?'
age = gets.chomp()
print 'How all in ft are you?'
height = gets.chomp().to_i

print 'You are #{age} years old and %.2f cm tall' % [height*2.54*12]
