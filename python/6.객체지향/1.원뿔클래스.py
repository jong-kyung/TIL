class Cone:
    def __init__(self, radius = 20, height = 30):
        if radius > 0 and height > 0:
            self.__radius = radius
            self.__height = height

    def get_volume(self):
        return 1/3 * 3.14 * self.__radius ** 2 * self.__height
    
    def get_surf(self):
        return 3.14 * self.__radius ** 2 + 3.14 * self.__radius * self.__height
    
    def get_radius(self):
        return self.__radius
    
    def set_radius(self, radius):
        if radius > 0:
            self.__radius = radius

    def get_height(self):
        return self.__height
    
    def set_height(self, height):
        if height > 0 :
            self.__height = height
    
unit_cone = Cone()

unit_cone.get_volume() # 멤버에 접근
unit_cone.get_surf()