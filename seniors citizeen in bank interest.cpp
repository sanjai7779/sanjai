#include<iostream>
using namespace std;
int main()
{
	int p,n,r,c,a;
	cout<<"enter customer id:";
	cin>>c;
	cout<<"Enter the age:";
	cin>>a;
	cout<<"enter the principal amount:";
	cin>>p;
	cout<<"enter the number of years:";
	cin>>n;
	if(a>=60)
	{
		r=12;
		}	
		else
		{
			r=10;
	}
		cout<<"your interest amount is "<<p*n*r/100;
	}
		



