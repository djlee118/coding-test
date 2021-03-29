data = input()

row = int(data[1])
col = int(ord(data[0])) - int(ord('a')) + 1

ss = [(-2,-1), (-1,-2), (1,-2), (2, -1), (2,1), (1,2), (-1,2), (-2,1)]

ret = 0

for s in ss:
    n_row = row + s[0]
    n_col = col + s[1]

    if n_row>=1 and n_row<=8 and n_col >=1 and n_col <=8:
        ret +=1

print(ret)
