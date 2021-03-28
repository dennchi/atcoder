
N = int(input())
tmp = 2000000000

for i in range(N):
    A,P,X = list(map(int , input().split()))
    if X > A:
        tmp = min(tmp,P)

if tmp == 2000000:
    print(-1)
else:
    print(tmp)

