//single inheritance
#include<iostream>
using namespace std;
class room
{
	public:
		int b,l;
		int area()
		{
			return (l*b);
			
		}
};
class bedroom:public room
{
	public:
		int h;
		void getdata(int len,int brd ,int hgt )
		{
			l=len;
			b=brd;
			h=hgt;
			
		};
		int volume()
		{
			return (l*b*h);
			
		};
};
int main(){
	int len,brd,hgt;
	cin>>len>>brd>>hgt;
	bedroom bd;
	bd.getdata(len,brd,hgt);
	cout<<"volume = "<<bd.volume()<<endl;
	cout<<"area = "<<bd.area()<<endl;
}
