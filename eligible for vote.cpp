#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the age";
	cin>>a;
	c=18-a;
	if(c==18 or a<0)
	{
		cout<<"enter the valid input";
	}
	else
	{
		if(a>18)
		{
		cout<<"you are eligible to vote";
	}
	else
	{
		cout<<"you are not eligible to vote";
	}
	cout<<"you are"<<c<<"years away to vote";
	}return 0;
	}

