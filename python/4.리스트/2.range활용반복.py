rad_list = range(10,31,10)
hei_list = [1,5,14]

for rad, hei in zip(rad_list, hei_list):  # zip() 함수를 사용하여 두 리스트를 병렬로 순회
    vol = 1/3 * 3.14 * rad **2 * hei
    surf = 3.14*rad**2 + 3.14*rad*hei
    print(f'반지름{rad} 높이{hei}')
    print(f'부피: {vol}')
    print(f'겉넓이: {surf}')