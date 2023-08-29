#include<iostream>
using namespace std;
class demo
{
	int num;
	string ch;
		public:
			void setmyvalue(int num,string ch)
			{
				this->num=num;
				this->ch=ch;
				
			}
			void displaymyvalue()
			{
				cout<<num<<endl;
				cout<<ch;
			}
};
int main(){
	demo obj;
	obj.setmyvalue(10,"this a text printed through this pointer");
	obj.displaymyvalue();		
	return 0;
}
