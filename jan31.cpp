#include<iostream>
using namespace std;
bool check(char a[1000][1000],int m,int n)
{
	int i,j;
	if(a[0][0]=='W'||a[0][n-1]=='W')
	{
     return 0;
	}
	if(a[0][0]=='A')
	{
		if(a[0][0]=='W')
		return 0;
	}
	if(a[0][0]=='B')
	{
		if(a[1][0]=='A')
		return 0;
	}
	if(a[m-1][n-1]=='A')
	{
		if(a[m-2][n-1]=='W'||a[m-2][n-2]=='W'||a[m-2][n-1]=='B')
		return 0;
	}
		if(a[m-1][0]=='A')
	{
		if(a[m-1][1]=='W'||a[m-2][0]=='W'||a[m-2][0]=='B')
		return 0;
	}

	if(a[m-1][0]=='W'||a[m-1][n-1]=='W')
	return 0;
	for(i=1;i<m-1;i++)
	{
		if(a[i][0]=='B')
		{
			if(a[i+1][0]=='A'||a[i+1][0]=='W')
			return 0;
		}
		else if(a[i][0]=='A')
		{
			if(a[i][1]=='W')
			return 0;
		}
		if(a[i][n-1]=='B')
		{
			if(a[i+1][n-1]=='A'||a[i+1][n-1]=='W')
			return 0;
		}
		else if(a[i][n-1]=='A')
		{
			if(a[i][n-2]=='W')
			return 0;
		}
		if(a[i][0]=='W'||a[i][n-1]=='W')
		return 0;
	}
	for(i=1;i<n-1;i++)
	{
		if(a[0][i]=='B')
		{
			if(a[1][i]=='A')
			return 0;
		}
		else if(a[0][i]=='A')
		{
			if(a[0][i-1]=='W'||a[0][i+1]=='W')
			return 0;
		}
		else if(a[0][i]=='W')
		{
			if(a[0][i-1]=='A'||a[0][i+1]=='A'||a[1][i]=='A')
			return 0;
		}
		 if(a[m-1][i]=='W')
		{
			if(a[m-1][i-1]=='A'||a[m-1][i+1]=='A'||a[m-2][i]=='B')
			return 0;
		}
		else if(a[m-1][i]=='A')
		{
			if(a[m-1][i-1]=='W'||a[m-1][i+1]=='W'||a[m-2][i]=='W'||a[m-2][i]=='B')
			return 0;
		}
	}
	return 1;
}
int main()
{
	char a[1000][1000];
	int no,m,n,i,j,flag;
	cin>>no;
	while(no--)
	{
		cin>>m>>n;
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		cin>>a[i][j];
		flag=0;
		if(check(a,m,n))
		{
			for(i=1;i<m-1;i++)
			{
				for(j=1;j<n-1;j++)
				{
					if(a[i][j]=='W')
					{
						if(a[i][j-1]=='A'||a[i+1][j]=='A'||a[i][j+1]=='A'||a[i-1][j]=='B')
						{
							flag=1;break;
						}
					}
					else if(a[i][j]=='A')
					{
						if(a[i][j-1]=='W'||a[i][j+1]=='W'||a[i-1][j]=='W'||a[i-1][j]=='B')
						{
							flag=1;break;
						}
					}
					else if(a[i][j]=='B')
					{
						if(a[i+1][j]=='A')
						{
							flag=1;break;
						}
					}
				}
				if(flag)
				break;
			}
			if(flag)
			cout<<"no\n";
			else
			cout<<"yes\n";
		}
		else
		cout<<"no\n";
	}
}
