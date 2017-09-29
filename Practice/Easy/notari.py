n=int(input())
while(n):
    a=list(map(int,input().split()))
    a.sort()
    c=0
    for j in range(n):  
     for k in range(j+1,n):
      for l in range(k+1,n):
       if(a[j]+a[k]<a[l]):
        c=c+1
    print(c)
    n=int(input())
