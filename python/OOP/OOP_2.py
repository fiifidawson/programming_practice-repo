#Adding check_pass_fail method

# Self: The self parameter is a reference to the current instance of the class, and is 
#used to access variables that belongs to the class

class Student:
    #Method
    def check_pass_fail(self):
        #self refers to the student calling it
        if self.marks >= 40:
            return True
        else: 
            return False

student1 = Student()
student1.name = "Harry"
student1.marks = 85
did_pass = student1.check_pass_fail()
print(did_pass)

student2 = Student()
student2.name = "Janet"
student2.marks = 12
did_pass = student2.check_pass_fail()
print(did_pass)

