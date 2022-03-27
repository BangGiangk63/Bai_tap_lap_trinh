#include<stdio.h>

int main(){
    // Chuong trinh in ra luc hoc cua hoc sinh

    float diemToan ;
    float diemLy ;
    float diemHoa ;
    float diemTB;

    do{
        
        printf("\nNhap diem toan ");
        scanf("%f",&diemToan);
        printf("\nNhap diem ly ");
        scanf("%f",&diemLy);
        printf("\nNhap diem hoa ");
        scanf("%f",&diemHoa);

        // kiem tra diem >= 0 va diem <= 10
        if ((diemToan < 0 || diemToan > 10) || (diemHoa < 0 || diemHoa > 10) || (diemLy < 0 || diemLy > 10))
            printf("\nDiem so khong hop le");
    } 
    while ((diemToan < 0 || diemToan > 10) || (diemHoa < 0|| diemHoa > 10) || (diemLy < 0 || diemLy > 10) );
    
    diemTB = (diemToan + diemLy + diemHoa) /3;

    if ( diemTB >= 0 && diemTB < 4)
        printf("Yeu");
    else if (diemTB >= 4 && diemTB < 6.5)
        printf("Trung binh");
    else if (diemTB >= 6.5 && diemTB < 8)
        printf("Kha");
    else 
        printf("Gioi");
    return 0;
}