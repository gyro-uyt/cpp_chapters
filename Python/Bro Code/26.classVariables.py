# class variables = shared among all instances of a class
#                   Defined outside the constructor
#                   Allow you to share data among all objects created from that class


class Student:
    class_year = 2026
    num_of_students = 0

    def __init__(self, name, age):
        self.name = name
        self.age = age
        ## for class variable use class name instead of self
        Student.num_of_students += 1


student1 = Student("Ayanakoji", 16)
student2 = Student("Aizen", 19)

print(student1.name, student1.age)
print(student2.name, student2.age)

# print(student1.class_year) # Avoid
## Prefer using class name with class variables for easy identification
print(Student.class_year)

print(f"Batch {Student.class_year} has {Student.num_of_students}")
