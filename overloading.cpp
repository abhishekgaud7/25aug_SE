#include<iostream>
using namespace std;
class overloadingDemo
{
	public:
		void addition(int a,int b)
		{
			cout<<a+b<<endl;
			}
		void addition(float a, float b)
		{
			cout<<a+b<<endl;
			}
	    void addition(int a, int b, int c)
		{
			cout<<a+b+c;
			}	
};
main()
{
	overloadingDemo od;
	od.addition(345,765);
	od.addition(56.7f,65.98f);
	od.addition(567,98,38);
}
