print("with temp variable")

number_1=int(input("enter first number:"))
number_2=int(input("enter first number:"))
print(number_1,number_2)

temp=number_1 
number_1=number_2 

print(number_1,temp)

print("without temp variable ") 

number_3=int(input("enter first number:"))
number_4=int(input("enter first number:")) 
print(number_3,number_4)

number_3=number_3+number_4
number_4=number_3-number_4
number_3=number_3-number_4

print(number_3,number_4)





