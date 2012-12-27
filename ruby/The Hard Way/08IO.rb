puts 'Choose a file:'
print '>'
filename = STDIN.gets.chomp()

txt = File.open(filename, 'w+')
puts txt.read()

=begin
File operations:

- File.close()
- File.read()
- File.readline()
- File.truncate() # erases
- File.write()

=end

txt.write("\n")
txt.close()
