class Student:           #class
    
    college_name="SFIT" #common hota ha har ek student ke liya tho use class.attribute stoare karva deta ha 

    def __init__(self,fullname):  
        self.name= fullname      #self.name = kar object ka name laga hoga {".name ek instance attribute ha "}
        print("my name is Akashjain")
#data ko Attribute bulate ha 
s1 =Student("karan")            #object attribute >> class atribute
print(s1.name)

s2=Student("PAtil")
print(s2.name)
print(Student.college_name) # <=class.attribute {where student==class,attribute==college_name} 