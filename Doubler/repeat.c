//Including standard input and output
#include <stdio.h>

int main()
{
    //Initializing the integer values num, sum, and i
    int num = 123;
    int sum = 0;
    int i;
    
    //Creating a for loop to quadruple the output value
    for(i=1; i<=4; i++)
    {
        sum = sum + num;
    }
    
    //The print statement to show the quadrupled value
    printf("%d\n\r", sum);
    
    //Returning the value 0 so the C code does not error out
    return 0;
}