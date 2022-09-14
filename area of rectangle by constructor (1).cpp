#include<iostream>
using namespace std;
class rectangle{
	int length,breadth;
	public:
		rectangle();
		rectangle(int , int);
		rectangle (int, float);
		int calculate();
		void display();
};
rectangle :: rectangle()
{
	length=0;
	breadth=0;
}
rectangle :: rectangle(int l,int b)
{
	length=l;
	breadth=b;
}
rectangle::rectangle(int l1, float b1=20)
{
	length =l1;
	breadth = b1;
	
}
int rectangle::calculate()
{
	return length*breadth;
}
void rectangle::display()
{
	cout<<"\n length"<<length;
	cout<<"\n breadth"<<breadth;
	cout<<"\n area of rectangle"<<calculate();
}
int main()
{
	rectangle r,r1(12,24),r3(20);
	r.display();
	r1.display();
	//r2.display();
	r3.display();
	return 0;
}

