n = 25
k = 5
res = 0

while True:
  t = (n // k) * k
  res += (n-t)
  n = t

  if n < k:
    break

  res += 1
  n //= k

res += (n-1)

print(res)



