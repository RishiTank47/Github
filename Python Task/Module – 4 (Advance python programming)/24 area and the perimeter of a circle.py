# Write a Python class named Circle constructed by a radius and two methods which will compute the area and the perimeter of a circle

class circle:
    radius=5

    def area(self):
        print(f"Area of circle is {3.14 * self.radius**2}")
    
    def perimeter(self):
        print(f"perimeter of circle is {2 * 3.14 * self.radius}")

cir=circle()

print(f"Radius of circle is {cir.radius}")

cir.area()
cir.perimeter()