x=int(input())
count=0
for i in range(1,x):
  if(x%i==0):
    count+=1
if(count!=2):
  print("no")
else:
  print("yes")       
