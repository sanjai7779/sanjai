#include<iostream>
using namespace std;
int main ()
{
	int n,i;
	cout<<"enter a positive integer";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		cout<<"\n"<<n<<"*"<<i<<"="<<n*i;
	}
	return 0;	
}
