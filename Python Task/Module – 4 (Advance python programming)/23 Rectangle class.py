# Write a Python class named Rectangle constructed by a length and width and a method which will compute the area of a rectangle


class Rectangle:
    length=5
    width=4

    def area(self):
        print( self.length * self.width)
    
rec=Rectangle()

print(f"The length of Rectangle is:-{rec.length}")
print(f"The width of Rectangle is:-{rec.width}")

rec.area()