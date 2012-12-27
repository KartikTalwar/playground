def puts_two(*args)
  arg1, arg2 = args
  puts "a1: #{arg1}, a2: #{arg2}"
end

puts_two('kartik', 'talwar')

def print_all(f)
  puts f.read()
end

def rewind(f)
  f.seek(0, IO::SEEK_SET)
end

current_file = File.open('a.txt')
print_all(current_file)
rewind(current_file)

def square(n)
  return n * n
end

puts square(3)
