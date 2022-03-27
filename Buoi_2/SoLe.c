#include<stdio.h>

int main (){
    // Chuong trinh in ra tat ca so nguyen duong le nho hon 100 tru cac so  5, 7, 93
    for ( int i = 0; i < 100; i++){
        if (i % 2 != 0 && (i != 5 && i != 7 && i != 93))
            printf ("%d, ",i);
            
    }
}