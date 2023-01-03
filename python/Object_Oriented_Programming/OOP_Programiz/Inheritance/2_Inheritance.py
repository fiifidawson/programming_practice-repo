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

class Quadrilateral(Polygon):
    def display_info(self):
        print("A quadrilateral is a polygon wiht four edges")