#include <stdio.h>

int main(){
    int x; //Declaration
    x = 123; //Initialization
    int y = 321; //Declaration + Initialization

    int age = 21; //Integer
    float gpa = 2.05; //Floating point number
    char grade = 'C'; //Single Character
    char name[] = "Bro"; //Array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);

    return 0;
}
/*Variable = Allocated space in memory to store a value. 
We refer to a variable's name to access the stored value. 
That variable now behaves as if it was the value it contains. 
But we need to declare what type of data we are storing.
*/