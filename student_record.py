d={}
print("input dictionary items: ")
while True:
        string = input('Enter some key/value pairs ("quit" to quit): ')
        if string == 'quit':
           break
        if string.count(' ') > 1:
           print('not valid!')
           continue
        key, value = string.split()
        d[key] = value
n=[]
sl=sorted(d.values())
s=sl[::-1]
a=d.keys()
p=dict(zip(a,s))
print(p)
       


                            

                

                        
                


        
        
    
                                

      

