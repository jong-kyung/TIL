# 특정 숫자까지의 합을 구하는 문제
num = int(input("어디까지 더할까요? : "))

sum = 0
i=1

while i<=num:
    sum = sum + i
    i= i+1

print(sum)

# 구구단 출력 문제
base = int(input("몇 단을 출력하시겠습니까? : "))

i = 1
while i<=9:
    print(f'{base}X{i}={base*i}')
    i = i+1