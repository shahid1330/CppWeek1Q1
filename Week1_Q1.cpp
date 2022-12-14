#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cout<<"Enter the number=";
	cin>>n;
	if(n<0)
	{
		cout<<"ERROR!";
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			fact*=i;
		}
		cout<<"Factorial="<<fact;
	}
	return 0;
}
