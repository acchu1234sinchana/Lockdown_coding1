list=[ 2, 7, 5, 64, 14]
even_count=0
odd_count=0
for i in list:
    if i%2==0:
        even_count+=1
        
    else:
        odd_count+=1
    
print("Even=",even_count)
print("Odd=",odd_count)