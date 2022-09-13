#include<iostream>
using namespace std;
class student{
	int i,m1,m2,m3;
	public:
		void getdata();
		void grade();
	};
	void student::getdata()
	{
		for(i=0;i>3;i++)
	{
		cout<<"enter";
		cin>>m1>>m2>>m3;
	}
	void student::grade()
{
	sum=m1+m2+m3;
	arg=sum/3;
	cout<<"sum of marks"<<sum;
	cout<<"arg of marks"<<arg;
	}
	int main()
	{
		student s;
		s.get data ();
		s.grade();
		return 0;
	}
