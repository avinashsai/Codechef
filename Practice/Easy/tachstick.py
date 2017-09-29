n,k=map(int,raw_input().split())
a=map(int,raw_input().split(" "))
a.sort()
c=0
for i in xrange(0,n-2):
    if(a[i+1]-a[i]<=k):
      c=c+1
    i=i+2
print c
