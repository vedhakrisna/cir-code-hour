n=int(input("no.of test cases: "))
t=0
i=0
l=[]
for i in range(0,n):
    s=input()
    l.append(s)
p=0
q=0
r=0
for i in range(0,n):
     if('.png' in l[i]):
         p=p+1
     elif('.bmp' in l[i]):
         q=q+1
     elif('.jpeg' in l[i]):
         r=r+1
print(p,q,r,sep="\n")
