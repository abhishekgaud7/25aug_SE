#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string name;
		string subject;	
		
		void inputData()
		{
			cout<<"Enter id:"<<endl;
			cin>>id;
			cout<<"Enter the name:"<<endl;
			cin>>name;
			cout<<"Enter subject:"<<endl;
			cin>>subject;
			
		}
		void displayData()
		{
			cout<<"ID:"<<id<<endl;
			cout<<"NAME:"<<name<<endl;
			cout<<"SUBJECT:"<<subject;
				}
		};
		main()
		{
			student s1;
			s1.inputData();
			s1.displayData();
		}
