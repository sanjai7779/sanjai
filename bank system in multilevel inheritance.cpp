#include<iostream>
using namespace std;
class person
{
	public:
	char name[40];
	int regno;
	void getdata()
	{
		cout<<"name";
		cin>>name;
		cout<<"reg no";
		cin>>regno;
	}	
};
class account:public person
{
	public:
	int accno;
	char bankname[50];
	void getdata1()
	{
		cout<<"acc no";
		cin>>accno;
		cout<<"bank name";
		cin>>bankname;
	 } 
};
class admin:public person
{
	public:
	int staffid;
	void getdata2()
	{
		cout<<"enter the staff id";
		cin>>staffid;
	}
};
class master:public account,public admin
{
	public:
	int roomno;
	void getdata3()
	{
		cout<<"enter the room number";
		cin>>roomno;
	}
};
int main()
{
	master m;
	m.getdata1();
	m.getdata2();
	m.getdata3();
	person p;
	p.getdata();
	}
