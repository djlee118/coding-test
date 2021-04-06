str = input()

size = len(str)
div = size // 2
lsum = 0
rsum = 0
ret = 0

for i in range(size):        
    ret = int(str[i])

    if i < div :
        lsum += ret
    else:
        rsum += ret

if lsum == rsum :
    print("LUCKY")
else:
    print("READY")




