#include<stdio.h>

int main(){
    // In ra tich cac chu so cua so nguyen duong n
    int N ;
    int Mul;
    int tmp;

    Mul = 1;

    do{
        printf("\nNhap so nguyen duong N = ");
        scanf("%d",&N);

        if (N <= 0)
            printf("Nhap sai, nhap lai\n");
    }
    while (N <= 0);

    while ( N > 0){
        tmp = N % 10;
        Mul = Mul * tmp ;
        N = N / 10;
    }
    printf("Tich cac chu so = %d",Mul);
    
}