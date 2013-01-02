class TheThing

    attr_reader :number # this makes it read only
    #attr_writer :number # write only
    #attr_accessor :number # read/write

    def initialize()
    # @ before a var, makes it an instance variable
        @number = 0
    end

    def some_function()
        puts 'I got called'
    end

    def add_me_up(more)
        @number += more
        return @number
    end

end

a = TheThing.new
b = TheThing.new

a.some_function()
b.some_function()

puts a.add_me_up(20)
puts a.add_me_up(20)
puts b.add_me_up(30)
puts b.add_me_up(30)

puts a.number
puts b.number

