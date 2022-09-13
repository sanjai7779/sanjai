#include<iostream>
using namespace std;
class biggest
{
    int x,y;
	public:
	      void input();
	      void display();
	};
	void biggest :: input(){
	cout<<"enter the first number:";
	cin>>x;
	cout<"enter the second number:";
	cin>>y;
}
void biggest :: display(){
	if(x>y){
    cout<<"x is biggest";
}
	else{
	 cout<<"y is biggest";
}
}
int main (){
	biggest x;
	x.input ();
	x.display();
	return 0;
}

