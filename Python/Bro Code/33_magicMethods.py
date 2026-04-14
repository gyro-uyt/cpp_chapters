# Magic methods = Dunder methods (double underscore) __init__, __str__, __eq__
#                 They are automatically called by many of Python's built-in operations
#                 They allow developers to define or customize the behavior of objects


class Book:

    def __init__(self, title, author, num_pages):
        self.title = title
        self.author = author
        self.num_pages = num_pages

    def __str__(self):
        return f"'{self.title}' by {self.author}"

    def __eq__(self, other):
        return self.title == other.title and self.author == other.author

    ## all these operations  like '<, >, +, -' between objects are not by default functioning however you can customize them to your liking as follows:
    def __lt__(self, other):
        return self.num_pages < other.num_pages

    def __gt__(self, other):
        return self.num_pages > other.num_pages

    def __add__(self, other):
        return f"{self.num_pages+other.num_pages} pages"

    def __contains__(self, keyword):
        return keyword in self.title or keyword in self.author

    def __getitem__(self, key):
        if key == "title":
            return self.title
        elif key == "author":
            return self.author
        elif key == "num_pages":
            return self.num_pages
        else:
            return f"Key '{key}' was not found"


book1 = Book("The Hobbit", "J.R.R. Tolkien", 310)
book2 = Book("Harry Potter and The Philosopher's Stone", "J.K. Rowling", 223)
book3 = Book("The Lion, the Witch and the Wardrobe", "C.S. Lewis", 172)
book3_1 = Book("The Lion, the Witch and the Wardrobe", "C.S. Lewis", 272)

# earlier these statements would have given their memory addresses but using __str__ to modify their functioning
print(book1)
print(book2)
print(book3)

# earlier it would return false, but modified their working using __eq__ method
print(book3 == book3_1)

print(book3 < book3_1)
print(book3 > book3_1)
print(book3 + book3_1)
print("Rowling" in book2)

# indexing objects
print(book1["title"])
print(book1["author"])
print(book1["num_pages"])
print(book1["audio"])
