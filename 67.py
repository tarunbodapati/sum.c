x=int(input())
count = 0
for i in range(1,x//2+1):
    if(x%i==0):
        count+=1
if(count==1):      
     print("yes")
else:
     print("no")
