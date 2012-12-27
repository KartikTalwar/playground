people = 23
cats = 42
dogs = 13

if people < cats
  puts 'more cats than people'
  diff = cats - people
  #people += diff
  #puts people, cats
elsif people < dogs
   puts 'more dogs than people'
else
  puts 'dunno'
end

