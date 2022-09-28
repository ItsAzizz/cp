#https://codeforces.com/contest/1714/problem/B
for _ in range(int(input())):
  l=int(input())
  t=input().split()
  e=set()
  for i in range(l,0,-1):
    if t[i-1] not in e:
      e.add(t[i-1])
    else :
      break
  print(l-len(e))
