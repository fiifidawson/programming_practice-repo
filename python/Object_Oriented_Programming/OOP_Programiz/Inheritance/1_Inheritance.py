
class Animal:
    def eat(self):
        print("I can eat")

# Giving Dog class access to methosd in Animal class
class Dog(Animal):
    def bark(self):
        print("I can bark")

class Cat(Animal):
    def purr(self):
        print("I can purr")


dog1 = Dog()
dog1.bark()
dog1.eat()

cat1 = Cat()
cat1.eat()