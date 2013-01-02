class Document
    attr_accessor = :title, :author, :content

    def initialize(title, author, content)
        @title   = title
        @author  = author
        @content = content
    end

    def words
        @content.split
    end

    def word_count
        words.size
    end

end

# Note: Should use 2 spaces for indenting
# Camels for classes, snakes everywhere

doc = Document.new('Hamlet', 'Shakespeare', 'To be or not to be..')
#doc = Document.new 'Hamlet', 'Shakespeare', 'To be or not to be..' # parans are optional

puts doc.title
puts doc.author
puts doc.content
puts doc.words
puts doc.word_count

puts doc.instance_of? Document
puts doc.instance_of? self.class.superclass.class

