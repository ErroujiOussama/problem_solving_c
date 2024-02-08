
def calculate_square(x,NumberOfDigits):
  if x==0 or x==1 : return x
  for i in range(2,x+1):
    if i**2==x : return list(map(int, str(i)))+["."]+([0]*NumberOfDigits)
    elif i**2>x : break
  i -= 1
  result=[i,"."]
  y=i**2
  for _ in range(1,NumberOfDigits+1):
    s=x-y
    uncompleted_y = int("".join([str(j) for j in result]).replace(".",""))*2
    x=s*100
    for i in range(1,10):
      if (uncompleted_y*10+i)*i > x :
         y=(uncompleted_y*10+i-1)*(i-1)
         result.append(i-1)
         break
      elif i==9:
         y=(uncompleted_y*10+i)*(i)
         result.append(i)
         break
  return result



