# 리스트
순서화 된 값의 집합체를 저장할 수 있는 데이터 타입
- 단일 식별자로 연속된 저장 공간 접근 수단 제공
- 개별 원소의 값을 수정, 추가, 삭제 가능
- 원소의 나열을 저장할 수 있는 시퀀스 타입 중 하나(list, set, tuple, dictionary)
  
## 구성
``` python
number_list = [1,2,3,4,5] # number_list : 참조변수, [1,2,3,4,5] : 리스트 객체
print(number_list[0]) # 시퀀스 타입의 원소에 접근
```

## 계수 제어 반복의 사용
``` python
number_list = [1,2,3,4,5]

for num in number_list: # for 계수-제어-변수 in 시퀀스
    print(num)
```