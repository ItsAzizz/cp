#https://codeforces.com/contest/1692/problem/B
for _ in range(int(input())):
    l = int(input())
    t =input().split()
    print(len(set(t))-(l-len(set(t))) % 2)
