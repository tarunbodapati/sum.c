x,y=map(int,input().split(" "))
count=0
for i in range(0,1000):
   if(x*y==i*i):
      count+=1
if(count==1):
   print("yes")
else:
    print("no")         
     
