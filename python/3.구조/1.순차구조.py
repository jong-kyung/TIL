# 순차구조 예시 1 : 트리 출력하기
print("   *")
print("  ***")
print(" *****")
print("*******")

# 순차구조 예시 2 : 원뿔 계산 프로그램
rad = int(input("반지름의 값을 입력하세요. "))
hei = int(input("높이의 값을 입력하세요. "))

# 부피 출력
vol = 1/3 * 3.14 * rad ** 2 * hei
print("부피: ", vol)

# 겉넓이 출력
suf = 3.14 * rad ** 2 + 3.14 * rad * hei
print("넓이 :", suf)