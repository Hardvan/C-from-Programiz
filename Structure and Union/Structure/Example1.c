#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person
{
    char name[50];
    int citNo;
    float salary;
}   person1;

int main()
{
    strcpy(person1.name, "Hardik Pawar"); // assign value to name of person1

    // assign values to other person1 variables
    person1.citNo = 1969;
    person1.salary = 6969696;

    // print struct variables
    printf("Name: %s\n", person1.name);
    printf("Citizenship No: %d\n", person1.citNo);
    printf("Salary: %.2f", person1.salary);

    return 0;
}

// Notice that we have used strcpy() function to assign the value to person1.name.
// This is because name is a char array (C-string)
// and we cannot use the assignment operator =
//with it after we have declared the string.