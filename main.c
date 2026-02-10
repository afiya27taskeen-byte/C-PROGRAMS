#include <stdio.h>
#include <string.h>

// Inner structure for Department
struct Department {
    int cse;          // Number of students in CSE
    int it;           // Number of students in IT
    int aiml;         // Number of students in AIML
    int data_science; // Number of students in Data Science
};

// Main structure for College
struct College {
    char name[50];
    char city[50];
    struct Department dept;
};
int main() {
    struct College college1;
    strcpy(college1.name, "Garden city Engineering College");
    strcpy(college1.city, "Bengaluru");
    college1.dept.cse = 120;
    college1.dept.it = 100;
    college1.dept.aiml = 80;
    college1.dept.data_science = 60;
    printf("College Name: %s\n", college1.name);
    printf("City: %s\n", college1.city);
    printf("Departments:\n");
    printf("  CSE: %d students\n", college1.dept.cse);
    printf("  IT: %d students\n", college1.dept.it);
    printf("  AIML: %d students\n", college1.dept.aiml);
    printf("  Data Science: %d students\n", college1.dept.data_science);

    return 0;
}
