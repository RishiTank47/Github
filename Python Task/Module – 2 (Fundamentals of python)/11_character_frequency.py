word=input("Write any word:") 

new_word={}

for i in word:
    if i in new_word:
        new_word[i]+=1
    else:
        new_word[i]=1
print(new_word) 
    

    


    