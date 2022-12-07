#include <stdio.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int unit = n%10;
    int tens = ((n%100)-(n%10))/10;
    int hundreds = ((n%1000)-(n%100))/100;
    int thousands = ((n%10000)-(n%1000))/1000;
    int tenthousands = ((n%100000)-(n%10000))/10000;
    printf("%d" , unit + tens + hundreds + thousands + tenthousands);
    return 0;
}
