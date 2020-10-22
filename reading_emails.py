t=int(input("no.of text cases: "))
q=0
while(q<t):
    x=input("enter a mail: ")
    a="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!#$%^&*{}|~_+-=/'."
    b="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_"
    h="0123456789"
    c=0
    d=0
    w=''
    r=''
    k=0
    s="@"
    for i in x:
        if i=="@":
            c=c+1
    if(c==1):
        #print("valid")
        #to get after @
        v=x.split("@")[1]
        #to get before @
        p=x.split("@",1)[0]
        #print(p)
        #print(v)
        for i in p:
            if i in a:
                w=w+i
        #print(w)
        if(len(w)==len(p)):
            if (w[0]=="." or w[len(w)-1]=="."):
                print("invalid")
            else:
                d=1
                #print("yes")
            for j in v:
                if j in b:
                    r=r+j
            #print(r)
            if(len(r)==len(v)):
                #print("continue")
                y=0
                for j in v:
                    if (j.isdigit()):
                        y=y+1
                if(y!=len(v)):
                    #print(v)
                    s=0
                    for i in v:
                        if i=="_":
                            s=s+1
                    #print(s)
                    if(s>2):
                        print("invalid")
                    elif(s==0):
                        #print("alid")
                        k=1
                    elif((r[0]=="_" or r[len(r)-1]=="_" )):
                        k=1
                        #print("valid")
                    if(k==1 and d==1):
                        print(x)
    q=q+1
    

        
            

