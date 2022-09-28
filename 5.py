for _ in range(int(input())):
  x=int(input())
  i=9
  ch=''
  while x>i: 
    ch=str(i)+ch
    x-=i
    i-=1
  else:
    ch=str(x)+ch
  print(ch)