x=int(input())
count=0
for i in range(1,100):
   if(x==13*i):
     count+=1
     
if(count==1):
   print("yes")
else:
   print("no")   
