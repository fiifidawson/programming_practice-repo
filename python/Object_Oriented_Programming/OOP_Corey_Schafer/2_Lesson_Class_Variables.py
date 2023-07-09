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
        self.email = first + '.' + '@company.com'

        Employee.num_of_emps += 1

    def fullname(self):#Instance method
        return f'{self.first} {self.last}'

    def apply_raise(self):
        self.pay = int(self.pay * self.raise_amount)



#Object of class
emp_1 = Employee('Corey', 'Schafer', 100100)
emp_2 = Employee('Jo', 'Mamma', 70000)

print(Employee.num_of_emps)