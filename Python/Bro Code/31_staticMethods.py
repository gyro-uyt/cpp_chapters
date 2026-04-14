# Static methods = A method that belong to a class rather than any object from that class (instance)
#                  Usually used for general utility functions

# Instance methods = Best for operations on instances of the class (objects)
# Static methods = Best for utility functions that do not need access to class data


class Employee:

    def __init__(self, name, position):
        self.name = name
        self.position = position

    def get_info(self):
        return f"{self.name} = {self.position}"

    # Note: in staticmethod 'self' is not used bcz this methods belongs to class not to any instance of class (object)
    @staticmethod
    def is_valid_position(position):
        valid_positions = ["Manager", "Cashier", "Cook", "Janitor"]
        return position in valid_positions


employee1 = Employee("Harry", "Coder")
employee2 = Employee("Walter White", "Cook")
employee3 = Employee("Gustavo", "Manager")

# Instance methods needs objects
print(employee1.get_info())
print(employee2.get_info())
print(employee3.get_info())

# Static methods don't even need objects
print(Employee.is_valid_position("Driver"))
print(Employee.is_valid_position("Janitor"))
