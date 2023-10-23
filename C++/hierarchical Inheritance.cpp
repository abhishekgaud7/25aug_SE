#include<iostream>
using namespace std;
class Parent
{
	public:
		void parent()
		{
			cout<<"\nThis is parent";
		}
};
class Child1: public Parent
{
	public:
		void child1()
		{
			cout<<"\nThis is first child";
		}
};
class Child2: public Parent
{
	public:
		void child2()
		{
			cout<<"\nThis is Second child";
		}
};
main()
{
	Child1 c1;
	Child2 c2;
	
	c1.parent();
	c1.child1();
	
	c2.parent();
	c2.child2();
}
