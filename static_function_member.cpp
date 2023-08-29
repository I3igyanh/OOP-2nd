#include<iostream>
using namespace std;
class demo 
{
	static int x;
	static int y;
	public:
		static void print()
		{
			cout<<"value of x: "<<x<<endl;
			x++;
			cout<<"value of x: "<<x<<endl;
			cout<<"value of y: "<<y<<endl;
			
		}
};          
int demo::x=10;
int demo::y=20;
int main(){
	demo ob;
	cout<<"printing through obj name "<<endl;
	ob.print();
	cout<<"printing through class name "<<endl;
	demo::print();
	return 0;
	
}                                                                                                                                                                                  
