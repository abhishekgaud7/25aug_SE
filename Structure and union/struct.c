#include<stdio.h>
struct Person
{
	int age;
	char name[20];
	float salary;
};
main()
{
	struct Person p;
	scanf("%d%s%f",&p.age,&p.name,&p.salary);
	printf("Age=%d\n Name=%s\n salary=%f",p.age,p.name,p.salary);
}
