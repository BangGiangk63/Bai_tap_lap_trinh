#include<stdio.h>

int main(){
    // Chuong trinh kiem tra so nguyen to
    int N;
    printf("\nNhap N = ");
    scanf("%d",&N);
    
    if (N < 2)
         printf("%d khong la so nguyen to",N);
    else{
        for (int i =2; i < N; i++){
        if (N % i == 0){
            printf("%d khong la so nguyen to",N);
            break;
        }
        else{
            printf("%d la so nguyen to",N);
            break;
        }        
    }
    }
    
    return 0;
}