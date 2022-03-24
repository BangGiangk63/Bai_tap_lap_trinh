#include<stdio.h>

int main(){
    int a = 5, b= 8, c;
    // hoán vị 2 số a và b
    c = a;
    a = b;
    b = c;
    printf("Gia tri a = %d va b = %d",a,b);
}