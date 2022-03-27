#include<stdio.h>

int main(){

    float a;
    float b;

    printf("\nNhap a = ");
    scanf("%f",&a);
    printf("\nNhap b = ");
    scanf("%f",&b);

    printf("Giai ptb1\n");
    if (a == 0){
        if (b == 0)
            printf("Vo so nghiem");
        else
            printf("Vo nghiem");
    }
    else
        printf("Nghiem cua pt la %0.2f",-b/a);
}