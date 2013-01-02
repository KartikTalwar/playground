class Document

    def initialize(title, author, content)
        raise 'title isnt a string' unless title.kind_of? String
        raise 'author isnt a string' unless author.kind_of? String
        raise 'content isnt a string' unless content.kind_of? String
        @title = title
        @author = author
        @content = content
    end

    def is_longer_than? (n)
        @content.length > n
    end

    private # methods are private starting here

    def word_count
        return words.size
    end

    # or
    # private :word_count

end


class Novels < Document

    def number_of_words
        word_count # self is a Document instance
    end

end

