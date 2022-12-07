#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count0=0;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    int count6=0;
    int count7=0;
    int count8=0;
    int count9=0;
    
    char str[1000];
    scanf("%s",str);
    
    for (int i=0; str[i]!='\0'; i++ ){
        if (str[i] == '1'){
            count1++;
        } 
        else if (str[i] == '0'){
            count0++;
        } 
        else if (str[i] == '2'){
            count2++;
        } 
        else if (str[i] == '3'){
            count3++;
        } 
        else if (str[i] == '4'){
            count4++;
        } 
        else if (str[i] == '5'){
            count5++;
        } 
        else if (str[i] == '6'){
            count6++;
        } 
        else if (str[i] == '7'){
            count7++;
        } 
        else if (str[i] == '8'){
            count8++;
        } 
        else if (str[i] == '9'){
            count9++;
        } 
    }

    printf("%d ",count0);
    printf("%d ",count1);
    printf("%d ",count2);
    printf("%d ",count3);
    printf("%d ",count4);
    printf("%d ",count5);
    printf("%d ",count6);
    printf("%d ",count7);
    printf("%d ",count8);
    printf("%d ",count9);   
    return 0;
}
