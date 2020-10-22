#triangle chopsticks
#first line contains no.of text cases
n=int(input("no.of text cases= "))
#second line consists of a,b,r
t=0
while(t<n):
    a, b, r=map(int,input("length of chop stick a , b and random number r: ").split())
    t=t+1
    #third line consists no.of chop sticks in jar
    c=int(input("no.of chop sticks in jar: "))
    i=0
    j=0
    k=0
    
#fouth lne consists length of each chop stick in a jar
    """for i in range(0,c):
      d=int(input("length's of chopstick in jar: "))
      l.append(d)"""
    l=[int(x) for x in input("enter: ").split()]
    print(l)
  #program to find winner
    p = 0
    q = 0
    m = 0
    if(a>0,b>0):
        for k in range(0,c):
            if l[k]<a+b:
                 p=1
            else:
                p = 0
            if a>b:
                if l[k]>a-b:
                   q=1
                elif l[k]>b-a :
                   q=1
            if (p==1&q==1):
              m=m+1
    if(m>r):
        print(m)
        print("Nasu")
    elif (r>=m):
        print(m)
        print("Grey")
    else:
        print("not possible")
    
                   
      
   
      
