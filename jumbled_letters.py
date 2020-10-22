t=int(input("no.of text cases: "))
q=0
l=[]
while(q<t):
    p=input("enter a string: ")
    l.append(p)
    q=q+1
for k in l:
    #for j in p:
    n=k.replace(" ","")
    x=''
    y=''
    z=''
    for i in range(0,len(n),2):
        x+=n[i]
    for i in range(1,len(n),2):
        y+=n[i]
    r=y[::-1]
    z=x+r
    print(z)
    
    
    

    
    
    
