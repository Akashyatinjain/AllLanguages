# class Student:           #class
#     college_name="SFIT" #common hota ha har ek student ke liya tho use class.attribute stoare karva deta ha 

#     def __init__(self,fullname):  
#         self.name= fullname      #self.name = kar object ka name laga hoga {".name ek instance attribute ha "}
#         print("my name is Akashjain")


#     def hello(self):
#         print("hello",self.name)    
# s1 =Student("karan")           

# s1.hello()

class Student:           #class
    college_name="SFIT" #common hota ha har ek student ke liya tho use class.attribute stoare karva deta ha 

    def __init__(self,fullname):  
        self.name= fullname      #self.name = kar object ka name laga hoga {".name ek instance attribute ha "}
        print("my name is Akashjain")

    @staticmethod #decorator == *Decorators allow us to wrap another function in order to extend the behaviour of the wrapped function, without permanently modifying it
    def hello():
        print("hello",self.name)    
s1 =Student("karan")           

s1.hello()

