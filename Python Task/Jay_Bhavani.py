print("JAY BHAVANI:")

print("-------------------------")

print("""Vadapav: 35
Dabeli : 30
Sandwitch:110""") 

item=["Vadapav","Dabeli","Sandwitch"]
price=[35,30,110]

# for i in item:
#     print(i)   
# for j in price:
#         print(j) 

print("\n")
print("Menu:")
print("\n")

press=input("Press 1 for product manager OR Press 2 for Customer:")

if press=="1":
    print("1) Product Manager:")
    print("\n")

    m_name=input("Enter Product Name:")   
    item.append(m_name) 

    m_price=input("Enter Product Price:")
    price.append(m_price)
    
    # print("\n")
    # for i in item:  
    #     for j in price: 
    #         print(i,j) 
    print(item)
    print(price)

if press=="2":
        customer_product=input("What you want:")
        customer_qut=input("Enter Quntity:")
        if customer_product in item:
            a=item.index(customer_product) 
            b=price[a]
            print(b)
            c=int(b) * int(customer_qut) 
            print("Price:",c)    
              



 



