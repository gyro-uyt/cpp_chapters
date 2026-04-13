# super() = Function used in a child class to call methods from a parent class (superclass)
#           Allows you to extend the functionality of the inherited methods
# calls the constructor of parent class


class Shape:
    def __init__(self, color, is_filled):
        self.color = color
        self.is_filled = is_filled

    def describe(self):
        print(f"It is {self.color} and {"filled" if self.is_filled else "not filled"}")


class Circle(Shape):
    def __init__(self, color, is_filled, radius):
        super().__init__(color, is_filled)
        self.radius = radius

    def describe(self):
        super().describe()
        print(f"It is a circle with an area of {3.14 * self.radius * self.radius}cm^2")


class Square(Shape):
    def __init__(self, color, is_filled, width):
        super().__init__(color, is_filled)
        self.width = width


class Triangle(Shape):
    def __init__(self, color, is_filled, width, height):
        super().__init__(color, is_filled)
        self.width = width
        self.height = height


circle = Circle(color="red", is_filled=True, radius=5)
square = Square(color="blue", is_filled=False, width=6)
triangle = Triangle(color="yellow", is_filled=True, width=7, height=8)

print(triangle.color)
print(triangle.is_filled)
print(f"{triangle.width}cm")
print(f"{triangle.height}cm")

square.describe()

# Note: if a child shares same method name with parent then Child's method is chose by default 
circle.describe()

