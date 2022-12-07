#include <stdio.h>
#include <string.h>

int main() {
    
    char s[1000];
    
    fgets(s,1000,stdin);
    int l = strlen(s);
    for (int i; i<l; i++){
        printf("%c" , s[i]);
        if (s[i]==' '){
            printf("\n");
        }
   }

    return 0;
}
