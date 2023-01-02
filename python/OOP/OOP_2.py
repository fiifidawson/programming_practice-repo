#Adding check_pass_fail method

# Self: The self parameter is a reference to the current instance of the class, and is 
#used to access variables that belongs to the class

class Student:
    #Method
    def check_pass_fail(self):
        if self.marks >= 40:
            return True
        else: 
            return False

student1 = Student()
student1.name = "Harry"
student1.marks = 85
did_pass = student1.check_pass_fail()

print(did_pass)
