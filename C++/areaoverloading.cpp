#include<iostream>
using namespace std;
class area
{
	public:
		void rectangle(int area,int breadth)
		{
			cout<<"area of reactangle="<<area*breadth<<endl;
		}
		void triangle(float area,float breadth,float i)
		{
			cout<<"area of triangle="<<i*area*breadth<<endl;
		}
		void circle(float p,float area)
		{
			cout<<"area of circle="<<p*area*area;
		}
};
main()
{
	area obj;
	
	obj.rectangle(5,4);
	obj.triangle(1.5,2.2,5.6);
	obj.circle(3.14,5);
}
