#include<stdio.h>

int main(){

// Chuong trinh dao nguoc so nguyen
int N;
int soDaoNguoc;
int c;

printf("\nNhap N = ");
scanf("%d",&N);
soDaoNguoc = 0 ;

while( N > 0) {
    c = N % 10;
    soDaoNguoc = soDaoNguoc * 10 + c;
    N = N / 10;
}
printf("So dao nguoc la %d",soDaoNguoc);
}