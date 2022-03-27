#include<stdio.h>

// tim nam nhuan
int namNhuan(int year){
    return ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0);
}

// tim so ngay trong thang
int soNgayTrongThang(int month, int year){
    switch (month)

    {
    case 1:case 3 : case 5:case 7 :  case 8 :case 10 :  case 12:{
        return 31;
        break;
     }
    case 4:case 6 : case 9:case 11 : {
        return 30;
        break;
    } 
    case 2:{
        if (namNhuan(year))
            return 29;
        return 28;
    }  
    }
}

// tim ngay ke tiep 
int ngayKeTiep(int day, int month, int year){

    int nextDay;
    int nextMonth;
    int nextYear;

    if (year > 0 && month > 0 && month < 13 && day > 0 && day < soNgayTrongThang(month, year)){
         // neu la thang 2
        if (month == 2){
            // nam nhuan
            if(namNhuan(year)){
                // neu la ngay 29
                if(day = 29){
                    nextDay = 1;
                    nextMonth = 3;
                }
            }
            // nam khong nhuan
            else{
                // neu la ngay 28
                if(day = 28){
                    nextDay = 1;
                    nextMonth = 3;
                }
            }
        }
        // neu thang khac thang 12 va ngay = so ngay toi da cua thang
        else if (month != 12 && day == soNgayTrongThang(month,year)){
            nextDay = 1;
            nextMonth = month + 1;
        }
        // neu la thang 12 va ngay = so ngay toi da cua thang
        else if (month == 12 && day == soNgayTrongThang(month,year)){
            nextMonth = 1;
            nextYear = year + 1;
            nextDay = 1;
        }
    }
    printf("\nNgay tiep theo: %d : %d : %d",nextDay,nextMonth,nextYear);
}
int main(){

    // In ra ngay ke tiep cua ngay vua nhap
    int day ;
    int month;
    int year;
    do{
        printf("\nNhap ngay : ");
        scanf("%d",&day);
        printf("\nNhap thang : ");
        scanf("%d",&month);
        printf("\nNhap nam : ");
        scanf("%d",&year);

        if ( (day < 0 || day > 31) || (month < 0 || month > 13) || year < 0 )
            printf("\nNhap sai, nhap lai");
    }
    while ((day < 0 || day > 31) || (month < 0 || month > 13) || year < 0 );

    ngayKeTiep(day,month,year);
    

}