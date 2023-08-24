#include <stdio.h>

union unionJob
{
    char name[32];
    float salary;
    int workerNo;
}   uJob;

struct structJob
{
    char name[32];
    float salary;
    int workerNo;
}   sJob;

int main()
{
    printf("Size of union = %d bytes", sizeof(uJob));
    printf("Size of structure = %d bytes", sizeof(sJob));

    return 0;
}

// However, the size of uJob is 32 bytes.
// It's because the size of a union variable will always be the size of its largest element.
// In the above example, the size of its largest element, (name[32]), is 32 bytes.