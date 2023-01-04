# Class Instances
class Employee:
    #constructor
    def __init__(self, first, last, pay):
        self.first = first #Instance variable
        self.last = last
        self.pay = pay
        self.email = first + '.' + '@company.com'

    def fullname(self):#Instance method
        return '{} {}'.format(self.first, self.last)

#Object of class
emp_1 = Employee('Corey', 'Schafer', 100100)
emp_2 = Employee('Jo', 'Mamma', 70000)


print(emp_1.fullname())