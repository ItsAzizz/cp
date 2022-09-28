#https://codeforces.com/contest/1700/problem/A
for _ in range(int(input())):
  ch=input()
  n=int(ch.split()[0])
  m=int(ch.split()[1])
  print(m*(m-1)//2+m*n*(n+1)//2)
