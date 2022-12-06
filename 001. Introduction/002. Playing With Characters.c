#include <stdio.h>
#include <string.h>

int main() 
{ 
    char c;
    char str[20];
    char sen[100];
    scanf("%c",&c);
    scanf("%s",str);
    scanf("\n");
    fgets(sen , 100 ,stdin);
   
    printf("%c\n",c);
    printf("%s\n", str); 
    fputs(sen,stdout);
    
    return 0;
}
