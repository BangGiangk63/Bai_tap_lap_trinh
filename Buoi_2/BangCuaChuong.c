#include<stdio.h>

int main (){
    // In bang cua chuong
    for (int i = 1; i <= 10; i++){
        printf("\nBang nhan %d",i);
        for (int j = 1; j <= 10; j++){
            printf(" \n%d x %d = %d",i,j,i*j);
        }
    }
}