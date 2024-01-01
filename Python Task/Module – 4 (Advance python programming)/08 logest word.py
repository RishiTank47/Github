#  Write a python program to find the longest words.

word=['word 1','word 10','word 100','word 10000','words 1','words 10']

length=[]


for i in word:
    count=0
    for j in i:
        count+=1
    word_1=(count,i)
    length.append(word_1)

max_length=max(length)

print(max_length)

        
