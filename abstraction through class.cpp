#include<iostream>
using namespace std;
class abstractionDemo
{
	private:
		int a=89,b=54;
		
		public:
			void add()
			{
				cout<<a+b;
			}
};
main()
{
	abstractionDemo ad;
	ad.add();
}
