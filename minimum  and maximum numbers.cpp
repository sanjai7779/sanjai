#include<iostream>
#include<conio.h> 
using namespace std;
int main()
{

//clrscr();
int a[5],b,i,t,j;
cout<<"enter the 5 elements"<<"\n";
for(i=0;i<5;i++)
cin>>a[i];
for(i=0;i<5;i++)
{
	for(j=i,1;j<5;j++)
	{
		if(a[i]<a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
cout<<"the max number is"<<a[0];
cout<<"the min number is"<<a[4];
cout<<"the difference is"<<a[0]-a[4];
return 0;
}

 

