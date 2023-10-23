#include<iostream>
using namespace std;
class GrandFather {
	public:
		void property()
		{
			cout<<"Total houses ";
		}
};
class Son1: public GrandFather
{
	public:
		void house1()
		{
			cout<<"\nMumbai";
		}
};
class Son2: public GrandFather
{
	public:
		void house2()
		{
			cout<<"\n Delhi";
		}
};

class GrandSon1 : public Son1
{
	public:
		void car()
		{
			cout<<"\nBugatti";
		}
};
class GrandSon2 : public Son2
{
	public:
		void Aeroplane()
		{
			cout<<"\nVistara";
		}
};
main()
{
GrandSon1 obj1;
GrandSon2 obj2;
obj1.property();
obj1.car();
obj2.Aeroplane();
obj1.house1();
}
