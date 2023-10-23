#include<iostream>
using namespace std;
class cricketer {
	public:
		void runs()
		{
			cout<<"Total runs 555";
		}
};
class Batsman1
{
	public:
		void batsman1()
		{
			cout<<"\n240";
		}
};
class Batsman2
{
	public:
		void batsman2()
		{
			cout<<"\n260";
		}
};

class award : public Batsman1 , public Batsman2
{
	public:
		void award()
		{
			cout<<"\n Best performance";
		}
};
main()
{
award obj1;
obj1.runs();
obj1.Batsman1();
obj2.Batsman2();
}
