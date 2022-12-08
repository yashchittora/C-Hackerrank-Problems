#include <stdio.h>

int a,b,c;

int find_nth_term(int n) {
    int element;
    
    if (n>=1 && n<=20 && a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100){
        if (n == 1){
            return a;
        }
        else if (n == 2){
            return b;
        }
        else if (n == 3){
            return c;
        }
        element = find_nth_term(n-1)+find_nth_term(n-2)+find_nth_term(n-3);
        
    }

    return element;
}


int main() {
    int n;
  
    scanf("%d\n%d %d %d", &n, &a, &b, &c);
    

    int ans = find_nth_term(n);
 
    printf("%d", ans); 
    return 0;
}
