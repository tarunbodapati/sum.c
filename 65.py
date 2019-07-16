x=map(int,[i for i in input()])
count=0
for j in x:
    if((j!=0) and (j!=1)):
        count+=1
      
if(count==0):
  print("yes")
else:
  print("no")
     
        
