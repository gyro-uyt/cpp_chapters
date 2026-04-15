# @property = Decorator used to define a method as a property (it can be accessed like an attribute)
#             Benefit: Add additional logic when read, write, or delete attributes
#             Gives you getter, setter, and deleter method


class Rectangle:
    def __init__(self, width, height):
        self._width = width  # '_' is indication for protected variables, variables which are not shared with children or other classes
        self._height = height  # these attributes are meant to be used internally (inside of the class)

    ## getter

    @property
    def width(self):
        return f"{self._width:.1f}cm"  # adding additional logic

    @property
    def height(self):
        return f"{self._height:.1f}cm"

    ## setter

    @width.setter
    def width(self, new_width):
        if new_width > 0:
            self._width = new_width
        else:
            print("Width must be greater than zero")

    @height.setter
    def height(self, new_height):
        if new_height > 0:
            self._height = new_height
        else:
            print("Height must be greater than zero")

    ## Deleter

    @width.deleter
    def width(self):
        del self._width
        print("Width has been deleted")

    @height.deleter
    def height(self):
        del self._height
        print("Height has been deleted")


rectangle = Rectangle(3, 4)

rectangle.width = -1  # gives our message
rectangle.height = 10  # changes height

# print(rectangle._height) # can be accessed but good to not
# gets from our custom logic, defined in property
print(f"{rectangle.width} x {rectangle.height}")

del rectangle.width
del rectangle.height

# print(rectangle.height) # E: AttributeError