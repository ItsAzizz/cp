#https://codeforces.com/contest/1691/problem/A
for _ in range(int(input())):
  n=int(input())
  a=[int(x) for x in input().split()]
  even=sum(x%2==0 for x in a)
  print(min(even,n-even))
