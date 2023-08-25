class person:
    name = ''
    
    def __init__(self,name):
        print(self)
        self.name = name
        print("Constructor is called")
    def greeting(self):
        print("Hello "+self.name)
        
    def __str__(self):
        return("Description of class person")
    
    def __del__(self):
        print("Destructor is called")
        
        
myperson = person("Ahmed")
print(myperson)
myperson.greeting()