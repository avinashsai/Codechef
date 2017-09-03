#include<stdio.h>
#define ll long long int
ll number(char b[20])
{
	ll num=0,i;
	for(i=0;b[i]!='\0';i++)
		num=num*10+(b[i]-'0');
	return num;
}
int main()
{
	ll a[100],i,n,no,j,max;
	char ch;
	scanf("%lld",&no);
	while(no--)
	{
		i=0;
        while(scanf("%lld%c", &a[i], &ch)){
        i++;
        if(ch=='\n'){
            break;
        }
    }
        n=i;
        max=-1;
        for(i=0;i<n;i++)
        {
        	if(a[i]==n-1){
        		a[i]=0;break;
        	}
        }
        max=-1;
        for(i=0;i<n;i++)
        {
        	if(a[i]>max)
        		max=a[i];
        }
       printf("%lld\n",max);
	}
	return 0;
}