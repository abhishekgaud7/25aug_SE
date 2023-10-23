#include<iostream>
using namespace std;
class Father {
	public:
		void Flat()
		{
			cout<<"3 BHK Flat";
		}
};
class Son : public Father
{
	public:
		void car()
		{
			cout<<"Aston Martin";
		}
};
main()
{
Son o;
o.Flat();
o.car();
}
