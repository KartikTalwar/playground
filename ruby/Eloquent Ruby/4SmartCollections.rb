poem_words = ['twinkle', 'twinkle', 'little', 'star', 'how', 'I', 'wonder']
#or
poem_words = %w{twinke twinke little star how I wonder}


# args zip

def echo_all(*args)
    args.each {|x| puts x}
end

movie = {:title => '2001', :genre => 'sci fi', :rating => 10}

# In place reversal/assertion

a = [1,2,3]
puts a.reverse
puts a

a = a.reverse!
puts a
