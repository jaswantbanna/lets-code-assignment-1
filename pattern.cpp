#include<iostream>
using namespace std;
int main()
{
	int n,i,j,m;
	cout<<"input n ad m:"<<endl;
	cin>>n>>m;
	for( i=0;i<n;i++)
	{
		for( j=0;j<m;j++)
		{
			if( i==0 || i==n-1)
			{
				cout<<"*";
			}
			else if(j==0 || j==m-1)
			{
				cout<<"*";
			}
			else
			cout<<" ";
		}
			cout<<endl;
		}
		return 0;
	}
		


