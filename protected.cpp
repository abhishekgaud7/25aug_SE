#include<iostream>
using namespace std;
class A
{ 
	protected:
		int x;
		
};
class B : public A
{
	public:
		void getdetails()
		{
			cout<<"Enter the value of x";
			cin>>x;
		}
		void display()
		{
			cout<<"X:"<<x;
			
		}
};
main()
{
	B obj;
	obj.getdetails();
	obj.display();
}
