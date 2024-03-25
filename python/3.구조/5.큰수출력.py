# A,B,C 값 입력받기
a = int(input("A를 입력해주세요."))
b = int(input("B를 입력해주세요."))
c = int(input("C를 입력해주세요."))

# A,B,C 값을 리스트에 대입하기
num_list = [a,b,c]

# 초기값 설정
max_num = 0

# 리스트를 순회하며 최댓값 찾기
for num in num_list:
    if max_num < num: 
        max_num = num

print("가장 큰 수는 %d 입니다." %max_num)