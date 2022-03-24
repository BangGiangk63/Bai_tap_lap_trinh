#include<stdio.h>

int main(){
    // Tinh tong S(n) = 1 + 2 + 3 +...+n
    int n = 15, sum = 0;
    for(int i = 1; i <= n; i++)
            sum = sum + i;  
    printf("\nTong S(n) = %d",sum);
}