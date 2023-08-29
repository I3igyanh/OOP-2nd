//multi-level inheritance
#include<iostream>
using namespace std;
class student
{
	public:
		int roll;
		void getr()
		{
			cout<<"enter roll :";
			cin>>roll;
			
		}
		
};
class test:public student
{
	public:
	int sub1,sub2;
	void getm()
	{
		cout<<"enter marks : ";
		cin>>sub1>>sub2;
		
	}
};
class result:public test
{
	int total;
	public:
	void details(){
		total=sub1+sub2;
		cout<<"roll :"<<roll<<endl;
		cout<<"maths marks : "<<sub1<<endl;
		cout<<"Science marks : "<<sub2<<endl;
		cout<<"total : "<<total<<endl;
		
	}
};
int main(){
	result a1;
	a1.getr();
	a1.getm();
	a1.details();
}
