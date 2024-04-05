import math

# math.pi를 활용한 원뿔의 부피와 표면적 계산
class Cone:
    def __init__(self, radius = 20, height = 30):
        if radius > 0 and height > 0:
            self.__radius = radius
            self.__height = height

    def get_volume(self):
        return 1/3 * math.pi * self.__radius ** 2 * self.__height
    
    def get_surf(self):
        return math.pi * self.__radius ** 2 + math.pi * self.__radius * self.__height
    
unit_cone = Cone()

unit_cone.get_volume() # 멤버에 접근
unit_cone.get_surf()