# Write a Python program to calculate surface volume and area of a
# cylinder

import math

cylinder_radius = 3
cylinder_height = 8

surface_area_result = 2 * math.pi * cylinder_radius**2 + 2 * math.pi * cylinder_radius * cylinder_height
volume_result = math.pi * cylinder_radius**2 * cylinder_height

print(f"The surface area of the cylinder is: {surface_area_result:.2f}")
print(f"The volume of the cylinder is: {volume_result:.2f}")
