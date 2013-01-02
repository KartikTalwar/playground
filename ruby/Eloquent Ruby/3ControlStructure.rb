class Document
    attr_accessor :writable, :read_only
    attr_reader = :title, :author, :content

    def initialize(title, author, content)
        @title   = title
        @author  = author
        @content = content
    end

    def title=(new_title)
        if @writable # read only
            @title = new_title
        end
    end

    def author(new_author)
        if not @read_only
            @author = new_author
        end
    end

    def content(new_content)
        unless @read_only
            @content = new_content
        end
    end

    def choose_title(title)
        @author = case title
                  when 'War And Peace' then 'Tolstoy'
                  when 'Romeo And Juliet' then 'Shakespeare'
                  else 'Dont know'
                  end
    end

    def words
        @content.split
    end

    def word_count
        words.size
    end

end

