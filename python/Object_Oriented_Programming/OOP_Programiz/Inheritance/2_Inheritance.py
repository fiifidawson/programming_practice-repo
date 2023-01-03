#Method Overriding:

#Base clase
class Polygon:
    def __init__(self, sides):
        self.sides = sides
        
    def display_info():
        print("A polygon is a two dimensional shape with straight lines")

    def get_perimeter(self):
        perimeter = sum(self.sides)
        return perimeter


class Triangle(Polygon):
    def display_info(self):
        print("A triangle is a polygon with 3 edges")
        # Preventing Method Overriding
        # Super(): returns a temporary object of the super class for the sub class
        super().display_info()

class Quadrilateral(Polygon):
    def display_info(self):
        print("A quadrilateral is a polygon wiht four edges")

t1 = Triangle([2, 4, 5])
perimeter = t1.get_perimeter()
print(f'The perimeter is {perimeter}')
