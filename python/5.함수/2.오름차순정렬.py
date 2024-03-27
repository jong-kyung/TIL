# 변수의 자료교환을 이용한 오름차순 정렬
a,b,c = map(int, input("세 숫자를 입력하세요").split())

def sort3(a,b,c):
    if a > b:
        a,b = b,a
    if a > c:
        a,c = c,a
    if b > c:
        b,c = c,b
    print(a,b,c)

sort3(a,b,c)