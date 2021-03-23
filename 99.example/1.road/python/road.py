n = int(input())
x,y = 1, 1
ps = input().split()

dx = [0,0,-1,1]
dy = [-1,1,0,0]
mts = ['L','R','U','D']

for p in ps:
    for i in range(len(mts)):
        if p == mts[i]:
            nx = x + dx[i]
            ny = y + dy[i]

    if nx < 1 or ny < 1 or nx > n or ny >n:
        continue

    x,y = nx,ny

print(x,y)

