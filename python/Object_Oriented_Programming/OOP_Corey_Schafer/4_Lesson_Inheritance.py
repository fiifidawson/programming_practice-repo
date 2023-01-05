# Class Instances
class Employee:
    #class variables
    num_of_emps = 0
    raise_amount = 1.04

    #constructor
    def __init__(self, first, last, pay):
        self.first = first #Instance variable
        self.last = last
        self.pay = pay
        self.email = f'{first}.{last}@maptech.com'

        Employee.num_of_emps += 1

    def fullname(self):#Instance method
        return f'{self.first} {self.last}'

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)

  

#Creating subclasses: Inheriting from Employee class
class Developer(Employee):
    pass


#Object of class
dev_1 = Developer('Corey', 'Schafer', 100100)
dev_2 = Developer('Jo', 'Mamma', 70000)

print(help(Developer))

# print(dev_1.email)
# print(dev_2.email)