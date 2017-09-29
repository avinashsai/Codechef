no=int(input())
for i in range(no):
   n=int(input())
   a=list(map(int,input().split()))
   a.sort()
   s=0
   c=0
   for j in range(n-1):
     if(a[j]==a[j+1]): 
       c=c+1
     else:
       s=s+c
       c=0
   k=((n*(n-1))/2)
   print(int(k-s))

