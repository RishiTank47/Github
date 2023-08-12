name=input("Enter Your Name:")
gender=input("Enter gender:")
age=input("Enter age:")

print("\n")
input("Enter Your Product:")
gram=int(input("Enter Product Gram:"))
print("Current gold price is(1 gram):5752")

print("\n")
print("-------------------------------------")
total=gram*5752
print("TOTALE GOLD RATE:",total)

print("\n")
print("Making charges(1 gram):845")
totale_making_charges=gram*845
print("Toatle Making Charges:",totale_making_charges)

print("\n")
print("-------------------------------------")
total_amount=total+totale_making_charges
print("Totle Amount:",total_amount)

print("\n")
print("\n")
print("Discout") 

if gender=="Male":
    if age>="65":
        if total_amount<31000: 
            discout=int((total_amount*20)/100) 
        elif 31000<total_amount<51000:
            discout=int((total_amount*30)/100)
        elif total_amount>51000:
            discout=int((total_amount*35)/100) 
        else:
            pass
    if age<="65":
        if  total_amount<31000: 
            discout=(total_amount*10)/100 
        elif 31000<total_amount<51000:
            discout=(total_amount*20)/100
        elif total_amount>51000:
            discout=(total_amount*25)/100
        else:
            pass
    else:
        pass
if gender=="Female":
    if age>="65":
        if  total_amount<31000: 
            discout=(total_amount*25)/100 
        elif 31000<total_amount<51000:
            discout=(total_amount*35)/100
        elif total_amount>51000:
            discout=(total_amount*40)/100
        else:
            pass
    if age<="65":
        if  total_amount<31000: 
            discout=(total_amount*15)/100 
        elif 31000<total_amount<51000:
            discout=(total_amount*25)/100
        elif total_amount>51000:
            discout=(total_amount*30)/100
        else:
            pass
    else:
        pass
else:
    pass

print("Discout is:",discout)
print("--------------------------------")
total_net_amout=total_amount-discout
print("Total Net Amount:",total_net_amout) 



       
        





