#include <stdio.h>

int main()
{
    float float1;
    float float2;
    int integer1;
    int integer2;

    scanf("%d" , &integer1);
    scanf("%d" , &integer2);
    
    scanf("%f" , &float1);
    scanf("%f" , &float2);
    
    printf("%d %d \n" , integer1+integer2 , integer1-integer2);
    printf("%.1f %.1f \n" , float1+float2 , float1-float2);
    return 0;
}
