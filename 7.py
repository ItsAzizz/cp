#https://codeforces.com/contest/1709/problem/A
for _ in range(int(input())):
  x=int(input())-1
  t=list(map(int,input().split()))
  if t[x]==0 or t[t[x]-1]==0 :
    print('No')
  else:
    print("Yes")
