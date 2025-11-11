#include <stdio.h>
int main() {
    float m1,m2,m3,total,average;
    char G;
    printf("Enter the marks of three subjects");
    scanf ("%f%f%f",&m1,&m2,&m3);
    total =m1+m2+m3;
    average =total/3;
    printf("The total marks is %.2f\n",total);
    printf("The average marks %.2f\n", average);
    if (average >= 90)
    G='A';
    else if (average >=80)
    G='B';
    else if (average >= 70)
    G='C';
    else if (average >= 60)
    G='D';
    else if (average >= 50)
    G='F';
    else
    G='E';
    printf ("Grade = %c\n",G);
    if (average >= 50)
    printf("Result is pass");
    else
    printf ("Result is fail");

    return 0;
}




