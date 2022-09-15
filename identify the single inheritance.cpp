#include<iostream>
using namespace std;
class p
{
	int x=4;
	public:
		void getdatal()
		{
			cout<<"x value"<<x;
		}
	};
	class c : public p
	{
		int y=5;
		public:
		void getdata()
	{
		cout<<"y value is"<<y;
    }
};
int main()
{
	c c;
	c.getdata();
	c.getdatal();
	return 0;
}
