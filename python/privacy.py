class person:
    __name="anonymous"

    def __hello(self):
        print("hello sir")

    def welcome(self):
        self.__hello()

p1 =person()
print(p1.welcome()) # working beacuse the welcome function do not have nay privacy  tag "__" 
print(p1.__hello()) # not working because it has __ privacy fxn in it butit can acess through the welcome class 