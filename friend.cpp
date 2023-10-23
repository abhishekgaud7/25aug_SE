#include<iostream>
using namespace std;
class Test
{
	private:
		int x;
		
	protected:
		int y;
		
	public:
		int z;
		
	friend void myfun();
		
};
void myfun()
{
	Test t;
	t.x=34;
	t.y=56;
	t.z=89;
	
	cout<<"X:"<<t.x<<endl;
	cout<<"Y:"<<t.y<<endl;
	cout<<"Z:"<<t.z;
	
	}
main()
{

 	myfun();
}
