#include<iostream>
using namespace std;
int main ()
{
	int a=2,b=3,c,choice;
	cout<<"provide your choice";
	cin>>choice;
	switch (choice)
	{
	case 1:
		c=a+b;
		cout<<"addition c="<<c;
		break;
	case 2:
		c=a-b;
		cout<<"subtraction c="<<c;
		break;
	case 3:
		c=a*b;
		cout<<"multiplication c="<<c;
		break;
	case 4:
		c=a/b;
		cout<<"division c="<<c;
		break;
	case 5:
		c=a%b;
		cout<<"modulus c="<<c;
		break;
		default:
			cout<<"provide choice between 1 to 5";
			break;
		}
		
}
