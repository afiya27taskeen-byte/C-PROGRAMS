#include <stdio.h>
#include <stdlib.h>
struct Student
{
int id;
char name[20];
float marks;
};
int main()
{
    struct Student s1={101,"Afiya",89.5};
    struct Student s2 ={102,"Afifa",76.0};
    printf("ID:%d\n",s1.id);
    printf("Name:%s\n",s1.name);
    printf("Marks:%2f\n",s1.marks);
    printf("ID:%d\n",s2.id);
    printf("Name:%s\n",s2.name);
    printf("Marks:%.2f\n\n",s2.marks);
    return 0;
}
