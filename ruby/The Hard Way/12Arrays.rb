count = [1,2,3,4,5]

for number in count
  puts number
end

count.each do |x| puts x end

elements = []

for i in (0..5)
  elements.push(i)
end

puts elements
puts elements.length()
puts rand(elements)
puts elements.join(' ')

puts count[2] #3

hashtable = {'k1' => 1, 'k2' => 2, 'v1' => 2}
puts hashtable['k1']
hashtable.delete('v1')

## Example

cities = {'CA' => 'San Francisco',
          'MI' => 'Detroit',
          'FL' => 'Jacksonvill',
          'NY' => 'New York',
          'OR' => 'Portland'}

def find_city(map, state)
    if map.include? state
        return map[state]
    else
        return 'not found'
    end
end

cities[:find] = method(:find_city) # called proc (aka procedure)

while true
    print "State? (Enter to quit)"
    state = gets.chomp()

    break if state.empty?

    puts cities[:find].call(cities, state)
end

