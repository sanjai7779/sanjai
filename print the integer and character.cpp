#include<iostream>
using namespace std;
class print
{
public:
	void output(int a,char b[20])
	{
		cout<<"integer is"<<a<<endl;
		cout<<"character is"<<b<<endl;
	}
	void output(char b[20],int a)
	{
		cout<<"character is"<<b<<endl;
		cout<<"integer is"<<a<<endl;
	}
};
		
int main()
{
    print obj;
	obj.output("programming skills",10);
	obj.output(10,"programming skills");
}
		
			
