//multiple inheritance
#include<iostream>
using namespace std;
class class1
{
	public:
		int n1;
		void geta(int a)
		{
			n1=a;
		};
};
class class2
{
	public:
	int n2;
	void getb(int b)
	{
		n2=b;
	};
	
};
class class3:public class1 ,public class2
{
	public:
	int n;
	void display()
	{
		n=n1+n2;
		cout<<"the sum is = "<<n<<endl;
	};
};
int main(){
	int a,b;
	cout<<"enter the two numbers = "<<endl;
	cin>>a>>b;
	class3 obj;
	obj.geta(a);
	obj.getb(b);
	obj.display();
}
