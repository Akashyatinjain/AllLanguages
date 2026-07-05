class Car:
    @staticmethod
    def start():
        print("THE CAR IS STARTED")
    @staticmethod
    def stop():
        print("STOPPED")

class Mercedes(Car):
    def __init__(self,brand):
        self.brand=brand       

class Sclass(Mercedes):
    def __init__(self, Type):
        self.Type=Type

S_class = Sclass("electric")
print(S_class.start())