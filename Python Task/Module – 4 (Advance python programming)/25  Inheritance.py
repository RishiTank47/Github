# Explain Inheritance in Python with an example? What is init? Or What Is A Constructor In Python?

'''
Inheritance:- when one class inheritance from another class is called inheritance.

parent class:- Base class:- super class
child class:- derived class:- sub class

'''

class Parent:
    
    def house(self):
        print("3 BHK house")
    
class Child(Parent):

    def car(self):
        print("Mercedez car")

c=Child()
c.car()
c.house()

'''
-----> init is special method which is automatically called when object is created

constructor:- constructor is a special method which will call automatically when object is created.

----> it will automatically when we create the object 

'''

