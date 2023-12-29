# Python script to concatenate following dictionaries to create a new one.

dic1 = {'a': 1, 'b': 2}
dic2 = {'b': 3, 'c': 4}
dic3 = {'d': 5, 'e': 6}

dic={**dic1,**dic2,**dic3} 

print(dic)
