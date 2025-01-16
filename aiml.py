import random;
class Environment(object):
    def __init__(self):
        self.locationcondition={'A':'1','B':'1'}
        self.locationcondition['A']=random.randint(0,1)
        self.locationcondition['B']=random.randint(0,1)

class sreflexagent(Environment):
    def __init__(self,Environment):
        print(Environment.locationcondition) #place vacuum at random location
        vacuumlocation=random.randint(0,1)
        
        if vacuumlocation==0:
            print("vacuum is randomly placed at location B") #and if location A is dirty
            
            if Environment.locationcondition['B']==1:
                print("Location B is dirty")#suck the dirt and mark it clean 
                Environment.locationcondition['B']==0 
                print("Location B has been cleaned") 
                vacuumlocation=1
            
            else:
                print("Location B is clear")#move to A
                print("moving to location A")
                vacuumlocation=1
            
            if Environment.locationcondition['A']==1: #suck the dirt and mark it clean
                Environment.locationcondition['A']=0
                print("Location A has been cleaned")
            
            else:
                print("Location A is clean")
        
        elif vacuumlocation==1:
            print("vacuum is randomly placed at locationn A") #and if location A is dirty
            
            if Environment.locationcondition['A']==1: 
                print("Location A is dirty")#suck the dirt and mark it clean 
                Environment.locationcondition['A']=0 
                print("Location A has been cleaned") 
                vacuumlocation=1
            
            else:
                print("Location A is clean") #move to B
                print("moving to location B") 
                vacuumlocation=1
            
            if Environment.locationcondition['B']==1: #suck the dirt and mark it clean 
                Environment.locationcondition['B']=0 
                print("Location B has been cleaned")
        
            else:
                print("Location B is clear")

#Done Cleaning

theEnvironment=Environment()
thevaccum=sreflexagent(theEnvironment)