#include <stdio.h>
union job              //defining a union
{         
   char name[32];
   float salary;
   int worker_no;
}u;
struct job1            //defining a structure
{       
   char name[32];
   float salary;
   int worker_no;
}s;
main()
{
   printf("size of union = %d",sizeof(u));
   printf("\nsize of structure = %d", sizeof(s));
}
