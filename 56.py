x=input()
z=0
for i in x:
    if(i >='0') and (i <='9'):
        z=z+1
if(z==0):
  print("No")
else:
  print("Yes")
