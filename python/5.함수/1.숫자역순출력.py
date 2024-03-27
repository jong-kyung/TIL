# 숫자를 역순으로 출력하는 프로그램
def reverse_number(num):
    while num !=0:
        digit = num%10
        num = num // 10 
        print(digit, end='')

reverse_number(1234)