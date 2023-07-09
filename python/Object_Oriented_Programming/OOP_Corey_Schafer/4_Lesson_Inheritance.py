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
    raise_amt = 1.10

    def __init__(self, first, last, pay, prog_lang):
        #Calling parent init method[Parent class Employee should handle first, last, pay whilst Developer class should handle prog_lang]
        super().__init__(first, last, pay)#or Employee.__init__(self, first, last, pay)
        self.prog_lang = prog_lang

class Manager(Employee):
    #Creating Employee
    def __init__(self, first, last, pay, employees=None):
        super().__init__(first, last, pay)
        if employees is None:
            self.employees = []
        else:
            self.employees = employees

    #Adding Employee
    def add_emp(self, emp):
        if emp not in self.employees:
            self.employees.append(emp)
    
    #Removing Employee
    def remove_emp(self, emp):
        if emp in self.employees:
            self.employees.remove(emp)
    #Display Employees
    def print_emps(self):
        for emp in self.employees:
            print(f'--> {emp.fullname()}')

#Object of class
dev_1 = Developer('Corey', 'Schafer', 100100, 'Python')
dev_2 = Developer('Jo', 'Mamma', 70000, 'Java')


mgr_1 = Manager('Sue', 'Smith', [dev_1])
print(mgr_1.email)

mgr_1.add_emp(dev_2)
mgr_1.print_emps()


# print(dev_1.email)
# print(dev_1.prog_lang)

# print(dev_1.pay)
# dev_1.apply_raise()
# print(dev_1.pay)
