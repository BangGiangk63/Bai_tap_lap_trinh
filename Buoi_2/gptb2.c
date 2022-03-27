#include<stdio.h>
#include<math.h>

int main(){

    float a;
    float b;
    float c;
    float x1; // nghiem thu nhat cua ptb2
    float x2; // nghiem thu hai cua ptb2
    float denta;

    printf("\nNhap a = ");
    scanf("%f", &a);
    printf("\nNhap b = ");
    scanf("%f", &b);
    printf("\nNhap c = ");
    scanf("%f", &c);

    if (a == 0){
        printf("\nGiai pt b1");
        if(b == 0){
            if(c == 0)
                printf("Vo so nghiem");
            else
                printf("Vo nghiem");
        }
        else
            printf("Nghiem cua phuong trinh la %0.2f", -c/b);
            
    }
    else{
        printf("\nGiai pt b2");
        denta = b*b - 4*a*c;
        if (denta > 0){
            x1 = (-b + sqrt(denta)) / (2*a);
            x2 = (-b - sqrt(denta)) / (2*a);
           
            printf("\nPt co 2 nghiem phan biet x1 = %0.2f, x2 = %0.2f",x1,x2);
        }
        else if (denta < 0)
            printf("Vo nghiem");
        else{
            printf("Pt co nghiem kep %0.2f", -b / (2*a));
        }
    }
    return 0;
}