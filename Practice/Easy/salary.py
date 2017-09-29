no=int(input())
for i in range(no):
   n=int(input())
   a=list(map(int,input().split()))
   a.sort()
   sum=0
   for j in range(n):
    sum+=a[j]-a[0]
   print(sum)
