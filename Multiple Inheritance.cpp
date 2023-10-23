#include<iostream>
using namespace std;
class Father {
	public:
		void Land()
		{
			cout<<"50000 acres ";
		}
};
class Tau
{
	public:
		void Mall()
		{
			cout<<"Alpha one nexus";
		}
};
class Son : public Father , public Tau
{
	public:
		void car()
		{
			cout<<"\n Range Rover";
		}
};
main()
{
Son obj1;
obj1.Land();
obj1.Mall();
obj1.car();
}
