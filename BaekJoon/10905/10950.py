n = int(input())
arr = []

for i in range(n):
    a, b = input().split()
    a = int(a)
    b = int(b)
    arr.append(a+b) 

for i in arr:
    print(i)
    