# 선택구조 예시 1 : 원뿔 계산 프로그램
rad = int(input("반지름의 값을 입력하세요. "))
hei = int(input("높이의 값을 입력하세요. "))

if rad > 0 and hei > 0:
    # 부피 출력
    vol = 1/3 * 3.14 * rad ** 2 * hei
    print("부피: ", vol)

    # 겉넓이 출력
    suf = 3.14 * rad ** 2 + 3.14 * rad * hei
    print("넓이 :", suf)
else:
    print("반지름과 높이의 값을 모두 양수로 입력해주세요.")

# 선택구조 예시 2 : 세 숫자 중 가장 큰 값 찾기
A = int(input("A 입력: "))
B = int(input("B 입력: "))
C = int(input("C 입력: "))

# A, B, C 중 가장 큰 수 출력
if A > B:
    if A > C:
        print(A)
    else:
        print(C)
else:
    if B > C:
        print(B)
    else:
        print(C)