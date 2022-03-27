#include<stdio.h>

int main(){
    float N;
    do {
        printf("\nNhap so duong N = ");
        scanf("%f",&N);

        if ( N < 0)
            printf("\nNhap sai, vui long nhap lai");
    }
    while (N < 0);
}