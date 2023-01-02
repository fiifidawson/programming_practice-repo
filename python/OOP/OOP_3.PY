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
    
    def __init__(self, name, marks):
        self.name = name
        self.marks = marks

student1 = Student("Edem", 100)
student2 = Student("Oforiwaa", 39)

print("Name: Marks")
print(student1.name,":", student1.marks)
print(student2.name,":",student2.marks)