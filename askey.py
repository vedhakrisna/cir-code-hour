a=' '
b=' '
a=input("enter first string: ")
b=input("enter second string: ")
s=0
p=0
for i in range(0,len(a)):
       c=' '
       c=a[i]
       print(ord(c))
       s=s+ord(c)
       print(s)
for j in range(0,len(b)):
       d=' '
       d=b[j]
       print(ord(d))
       p=p+ord(d)
       print(p)
if(p==s):
    print("They are equal.")
else:
    print("They are not equal.")


       



