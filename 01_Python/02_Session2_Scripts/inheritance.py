class soul:
    name = ''
    
    def __init__(self,name):
        self.name = name
        print(self)
        print("Constructor soul is called")
        
    def heart(self):
        print("teeeet")
    
    def __del__(self):
        print("Destructor soul is called")
    

class animal(soul):
    name = ''
    
    def __init__(self,name):
        self.name = name
        print(self)
        print("Constructor animal is called")
        super().__init__(name)
        
    def eat(self):
        print("eat food")
    
    def __del__(self):
        print("Destructor animal is called")
        super().__del__()
    

class cat(animal):
    name = ''
    
    def __init__(self,name):
        print(self)
        self.name = name
        print("Constructor cat is called")
        super().__init__(name)
        
    def sound(self):
        print("meeaauuuuu")
    
    def __del__(self):
        print("Destructor cat is called")
        super().__del__()
        
        
mycat = cat("lele")
mycat.eat()
mycat.heart()
mycat.sound()