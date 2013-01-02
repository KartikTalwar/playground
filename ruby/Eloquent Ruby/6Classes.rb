class TextCompressor

    attr_reader :unique, :index

    def initialize(text)
        @unique = []
        @index  = []

        words = text.split
        words.each do |x|
            i = @unique.index(word)
            if i
                @index += 1
            else
                @unique << word
                @index << unique.size - 1
            end
    end
end


compressor = TextCompressor.new('this is some text text is this yo')
unique_wrd = compressor.unique
words_idx  = compressor.index


# Optimized

class TextCompressor
    attr_reader :unique, :index

    def initialize(text)
        @unique = []
        @index  = []

        add_text()
    end

    def add_text(text)
        words = text.split
        words.each {|word| add_word(word)}
    end

    def add_word(word)
        i = unique_index_of(word) || add_unique_word(word)
        @index << i
    end

    def unique_unique_word(word)
        @unique << word
        unique.size - 1
    end


    def +(other)
        if other.kind_of? String and other.instance_of? TextCompressor
            return TextCompressor.new("#{text} #{other.text}")
        end
    end

    def ==(other)
        return true if other.equal?(self)
        return false unless other.respond-to?(:index)
        return false unless other.instance_of?(self.class)
        text == other.text
    end

end

