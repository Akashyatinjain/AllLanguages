class Student:           #class
    
    #name="Akashjain"
    def __init__(self): #deafult construtor class by deaulf python banke ke rak tha ha 
        print("hellooo") # it is not excuted 
        


    def __init__(self,fullname):  #construtor = har new object ke sat call hota ha 
        self.name= fullname       #self ke alwa bhi both kuch ho sakta ha 
        print("my name is Akashjain")
#data ko Attribute bulate ha 
s1 =Student("karan")            #object
print(s1.name)

s2=Student("PAtil")
print(s2.name)