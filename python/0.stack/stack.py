stack = []

stack.append(5)
stack.append(4)
stack.append(3)
stack.append(2)
stack.append(1)
stack.pop()
stack.append(6)
stack.append(7)
stack.pop()

print(stack[::-1]) # 최상단 원소부터 출력하기
print(stack)       # 최하단 원소부터 출력하기