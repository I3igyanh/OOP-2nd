#include<iostream>
using namespace std;
class demo
{
	
	public:
		int fn,sn;
		void setdata()
		{
			cout<<"enter two numbers "<<endl;
			cin>>fn>>sn;
		}
	 void sum(demo);
};

demo::void sum()
{
	int sum;
	sum=d.fn+d.sn;
	cout<<"sum = "<<sum<<endl;
}

int main()
{
	demo a;
	a.setdata();
	a.sum();
}


