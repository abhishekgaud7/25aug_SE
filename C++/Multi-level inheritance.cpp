#include<iostream>
using namespace std;
class GrandFather {
	public:
		void Land()
		{
			cout<<"50000 acres of Land";
		}
};
class Father: public GrandFather
{
	public:
		void Flat()
		{
			cout<<"\n 7 BHK Flat";
		}
};
class Son : public Father
{
	public:
		void car()
		{
			cout<<"\n Range Rover";
		}
};
main()
{
Son obj;
obj.Land();
obj.Flat();
obj.car();
}
