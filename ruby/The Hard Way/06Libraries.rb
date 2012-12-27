require 'open-uri'

open('http://www.ruby-lang.org/en') do |x|
    x.each_line { |line| p line}
    puts x.base_uri
    puts x.content_type
    puts x.charset
    puts x.content_encoding
    puts x.last_modified
end
