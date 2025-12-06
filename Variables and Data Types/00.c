/*
    Author: Md Ammad Ali
    Description: Data Types and Data Types
        1. int      123 or -123         2 or 4 bytes
        2. char     'a' or 'B'          1 bytes
        3. float    19.99 or -19.99     4 bytes
        4. boolean                      1 bytes
        5. double                       8 bytes
*/
#include <stdio.h>
int main()
{
    // Declaring (Creating) Variables
    printf("Int \n");
    int myIntNum = 10;                              // 2 or 4 bytes
    printf("Value: %i\n", myIntNum);                // prints: 10
    printf("Address: %p\n", &myIntNum);             // prints: memory address
    printf("Address: %p\n", (void*)&myIntNum);      // prints: void pointer memory address
    printf("Float \n");
    float myFloatNum = 5.99;                        // 4 bytes
    printf("Value: %f\n", myFloatNum);
    printf("Value: %.2f\n", myFloatNum);
    printf("Value: %p\n", &myFloatNum);
    printf("Value: %p\n", (void*)&myFloatNum);
    printf("Char \n");
    char myLetter = 'D';                            // 1 bytes
    printf("Value: %c\n", myLetter);
    printf("Value: %p\n", &myLetter);
    printf("Value: %p\n", (void*)&myLetter);
    printf("Double \n");
    double myDoubleNum = 9.98;
    printf("Value: %.2lf\n", myDoubleNum);
    printf("Value: %p\n", &myDoubleNum);
    printf("Value: %p\n", (void*)&myDoubleNum);

    // Change Variable Values
    int myNum = 15;
    int myOtherNum = 23;
    myNum = myOtherNum;
    printf("%d", myNum);

    // Declare Multiple Variables
    int xy = 5, yy = 6, zz = 50;
    printf("%d \n", xy + yy + zz);

    int x, y, z;
    x = y = z = 50;
    printf("%d \n", x + y + z);
    return 0;
}
