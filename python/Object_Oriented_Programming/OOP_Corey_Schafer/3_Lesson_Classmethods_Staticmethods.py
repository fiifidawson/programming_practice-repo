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

    @classmethod
    def set_raise_amt(cls, amount):
        cls.raise_amt = amount

    @classmethod
    def from_string(cls, emp_str):
        first, last, pay = emp_str.split('-')
        return cls(first, last, pay)

    @staticmethod
    def is_weekday(day):
        if day.weekday() == 5 or day.weekday() == 6:
            return False
        return True


#Object of class
emp_1 = Employee('Corey', 'Schafer', 100100)
emp_2 = Employee('Jo', 'Mamma', 70000)

import datetime
my_date = datetime.date(2022, 7, 26)
print(Employee.is_weekday(my_date))



# emp_str_1 = 'John-Doe-13930'
# emp_str_2 = 'Steve-Smith-324343'
# emp_str_3 = 'Jane-Doe-534445'
# Employee.set_raise_amt(1.05)
# print(Employee.num_of_emps)