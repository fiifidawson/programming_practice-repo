"""
> Create a class named Triangle
> Create an object from it. The object will have three
attribute named a,b, and c that represent the sides of 
the triangle.

> The Triangle class will have two methods:
 >the init method to initialize the sides
 >a method to calculate the perimeters of the triangle 
  from its sides

> The perimeter of the traingle should be printed from outside
the class.
"""
class Triangle:
    def __init__(self, a, b, c):
        self.a = a
        self.b = b
        self.c = c

    def perimeter(self):
        result = self.a + self.b + self.c
        return result


s1 = int(input("Enter length of 1st side:"))
s2 = int(input("Enter length of 2st side:"))
s3 = int(input("Enter length of 3st side:"))
t1 = Triangle(s1, s2, s3)
perimeter = t1.perimeter()
print("Perimeter of the triangle is", perimeter)