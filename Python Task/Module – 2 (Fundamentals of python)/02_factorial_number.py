n = int(input())

if n == 0:
    fact = 0
else:
    fact=1
    for i in range(1,n+1):
        fact = fact*i
print("Factorial of",str(n),"is:",fact)

    
