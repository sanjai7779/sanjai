#include<iostream>

using namespace std;

int main()
{
	int number, i = 1, sum = 0;
	
	cout << "Please Enter the Number to check for Perfect  =  ";
	cin >> number;
	
	while( i < number )
	{
		if(number % i == 0)
		{
			sum = sum + i;
		}
		i++;
	}
			
	if(number == sum)
	{
		cout << number << " is a Perfect Number";
	}
	else
	{
		cout << number << " is Not a Perfect Number";
	}
 	return 0;
}
