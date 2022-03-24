#include<stdio.h>

int main(){
    //Đếm số lượng chữ số của số nguyên dương n, n nhập từ bàn phím
    int n, count = 0;
    printf("\nNhap n = "); scanf("%d",&n);
    for (; n!=0;){
        n = n/10;
        count++;
    }
    printf("%d",count);
}