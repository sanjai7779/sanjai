#include<iostream>
using namespace std;
class rectangle{
   public:
   int length,breadth,height,area_of_rectangle,area_of_cuboid;
   void setdata()
   {
   cout<<"enter length=";
   cin>>length;
   cout<<"\nenter breadth=";
   cin>>breadth;
   area_of_rectangle=length*breadth;
   cout<<"\narea of rectangle="<<area_of_rectangle;
   }
};

class shape{
	public:
		void setdata1()
		{
			cout<<"rectangle";
			cout<<"cuboid";
		}
};
class cuboid:public rectangle 
{
	public:
		void setdata2()
		{
			cout<<"\nenter the height=";
			cin>>height;
			area_of_cuboid=length*breadth*height;
			cout<<"\narea of cuboid="<<area_of_cuboid;
		}
};
int main()
{
	cuboid c;
	c.setdata();
	c.setdata2();
	return 0;
}
