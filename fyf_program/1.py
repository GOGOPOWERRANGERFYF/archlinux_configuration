print("hello world!")
class person(object):
    def __init__(self, name, age):
        self.name = name;
        self.age = age;
    def print_info(self):
        print("%s %d" %(self.name, self.age))

def func():
    print("This is function")

if __name__ == "__main__":
    print("moudle calling")
    func()
else:
    print("moudle called")




