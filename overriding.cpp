#include<iostream>
using namespace std;
class parent
{
	public:
		void mobile()
		{
			cout<<"Samsung s23 ultra"<<endl;
		}
};
class child : public parent
{
	public:
		void mobile()  
		{
			 parent:: mobile(); // scope resolution method
			cout<<"Samsung Galaxy";
		}
};
main()
{
	child c1;
	c1.mobile();
}
