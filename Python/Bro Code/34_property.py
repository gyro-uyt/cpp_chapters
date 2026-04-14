# @property = Decorator used to define a method as a property (it can be accessed like an attribute)
#             Benefit: Add additional logic when read, write, or delete attributes
#             Gives you getter, setter, and deleter method


class Rectangle:
    def __init__(self, width, height):
        self.width = width
        self.height = height


rectangle = Rectangle(3, 4)

print(f"{rectangle.width} x {rectangle.height}")
