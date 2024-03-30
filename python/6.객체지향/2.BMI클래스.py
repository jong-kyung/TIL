class BMI:
    def __init__(self, name, age, weight, height):
        self.__name = name # private으로 설정
        self.__age = age
        self.__weight = weight
        self.__height = height

    def get_bmi(self):
        return self.__weight / (self.__height / 100) ** 2
    
    def get_status(self):
        bmi = self.get_bmi()

        if bmi >= 25:
            return "비만"
        elif bmi >= 23 and bmi < 25:
            return "과체중"
        elif bmi >= 18.5 and bmi < 23:
            return "정상"
        else:
            return "저체중"
        
person1 = BMI("홍길동", 40, 78, 182)

print(person1.get_bmi())
print(person1.get_status())