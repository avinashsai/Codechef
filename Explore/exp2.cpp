#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
long long int x1,y1,x2,y2,r;
cin>>x1>>y1>>x2>>y2>>r;
if((abs(x1-x2)*abs(x1-x2))+(abs(y1-y2)*abs(y1-y2))<=r*r)
cout<<"Unlimited Hoyenga";
else
cout<<"Nahi Hoyenga";
return 0;
}
