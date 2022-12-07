#include <stdio.h>

int main() {

    int sum=0;
    int size;
    scanf("%d" , &size);
    
    int arr[size];
     for (int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    
    printf("%d",sum);
    return 0;
}
