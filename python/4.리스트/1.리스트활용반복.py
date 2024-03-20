rad = 10
hei_list = [1,5,14,26,31]

for hei in hei_list:
    vol = 1/3 * 3.14 * rad **2 * hei
    surf = 3.14*rad**2 + 3.14*rad*hei
    print(f'반지름{rad} 높이{hei}')
    print(f'부피: {vol}')
    print(f'겉넓이: {surf}')