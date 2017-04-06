#include <stdio.h>

int main()
{
    int num = 123;
    int sum = 0;
    int i;
    
    //sum = sum + num;
    //sum = sum + num;
    
    for(i=1; i<=4; i++)
    {
        sum = sum + num;
    }
    
    printf("%d\n\r", sum);
    
    return 0;
}