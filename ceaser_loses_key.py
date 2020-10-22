s=input("enter a msg: ")
s=list(s)
a='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
a=list(a)
b='abcdefghijklmnopqrstuvwxyz'
b=list(b)
k=13
j = 0
while j < len(s):
    if(j%2==0):
        if(s[j].isupper()==True):
            p=ord(s[j])
            ps=p-65
            n=(ps-13)%26
            f=a[n]
            s[j]=a[n]
        elif(s[j].islower()==True):
            p=ord(s[j])
            ps=(p-97)
            n=(ps-13)%26
            s[j]=b[n]
        else:
            s[j]=s[j]
    j += 2
s="".join(s)
print(s)

























