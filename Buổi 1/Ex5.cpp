#include<stdio.h>

int main(){
    // Tính tổng các chữ số của số nguyên dương n, n nhập từ bàn phím

    int n, sum = 0, i;
    printf("\nNhap so nguyen duong n = "); scanf("%d",&n);
    for (;n!=0;){
        i = n % 10;
        sum = sum + i;
        n = n/10;
    }
    printf("%d",sum);
    }
       