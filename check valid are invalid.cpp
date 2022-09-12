#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
main()
{
	//clrscr();
	char str1[100],str2[100];
	cout <<"Enter a string";
	cin>>str1;
	cout<<"Enter the string agin";
	cin>>str2;
	if(str1==str2)
	cout<<"It is valid";
	else
	cout<<"It is invalid";
	getch();
}



