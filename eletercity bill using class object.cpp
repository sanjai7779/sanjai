#include<iostream>
using namespace std;
class e_bill
{
	private:
		int c_no;
		char c_name[20];
		int units;
		double bill;
		public:
			void get()
			{
				cout<<"enter details of customer below ::\n";
				cout<<"enter customer No.::";
				cin>>c_no;
				cout<<"\n enter customer name ::";
				cin>>c_name;
				cout<<"\n enter No.of units used ::";
				cin>>units;
				
			}
			void put()
			{
				cout<<"\n entered details of customer are ::";
				cout<<"\n customer No. is :"<<c_no;
				cout<<"\n\ncustomer name is : "<<c_name;
				cout<<"\n\n Number of units consumed :"<<units;
				cout<<"\n\nBill of customer :"<<bill;
				}
				void calc_bill()
				{
					if(units<=100)
					bill=units*1.20;
					else if(units<=300)
					bill=100*1.20+(units-100)*2;
					else
					bill=100*1.20+200*2+(units-300)*3;
				} 
			};
			int main ()
			{
				e_bill b1;
				b1.get();
				b1.calc_bill();
				b1.put();
				cout<<"\n";
				return 0;
			}
				
		

