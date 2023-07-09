#init method

#init method is a special method that automatically 
#gets called everytime objects are created


class Student:
    #Method
    def check_pass_fail(self):
        #self refers to the student calling it
        if self.marks >= 40:
            return True
        else: 
            return False
    #Initialises the attributes of name and marks(similar to struct)
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

student1 = Student("Edem", 100)
student2 = Student("Oforiwaa", 39)

print("""Name: Marks
Pass: True/False""")

print(student1.name,":", student1.marks)
did_pass = student1.check_pass_fail()
print(did_pass)

print(student2.name,":",student2.marks)
did_pass = student2.check_pass_fail()
print(did_pass)


