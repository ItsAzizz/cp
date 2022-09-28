for _ in range(int(input())):
  t=[int(e) for e in input().split()]
  a=t[0]
  t.sort()
  print(len(t)-t.index(a)-1)