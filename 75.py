x=input()
x=list(x)
z=len(x)
if(z%2!=0):
  n=int(z/2)
  x[n]='*'
else:
  y=int(z/2)
  x[y-1]='*'
  x[y]='*'
for i in x:
  print(i,end="")  
  

  
