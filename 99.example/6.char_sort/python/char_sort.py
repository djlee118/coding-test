s = input()

size = len(s)
sum = 0;
a = []

for i in range(size):
    if(s[i].isdigit()):
        sum += int(s[i])
    else:
        a.append(s[i])

a.sort()

res = ''.join(a)

print(res + str(sum))



