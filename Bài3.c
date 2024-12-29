#include <stdio.h>

int namnhuan(int nam) {
    return (nam % 4 == 0 && (nam % 100 != 0 || nam % 400 == 0));
}
int hople(int ngay, int thang, int nam) {
    if (thang < 1 || thang > 12 || nam < 1)  
        return 0;
    
    if (thang == 2) {  // Thang 2
        if (namnhuan(nam)) {  // Nam nhuan 29 ngay
            return ngay >= 1 && ngay <= 29;
        } else {  // Nam nhuan 28 ngay
            return ngay >= 1 && ngay <= 28;
        }
    }
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) { 
        return ngay >= 1 && ngay <= 30;
    }
    else{
    return ngay >= 1 && ngay <= 31;
    }
}
int main() {
    int ngay, thang, nam;
    
    printf("Nhap ngay, thang, nam: ");
    scanf("%d %d %d", &ngay, &thang, &nam);

    if (hople(ngay, thang, nam)) {
        printf("Ngay %d/%d/%d la hop le.\n", ngay, thang, nam);
    } else {
        printf("Ngay %d/%d/%d la khong hop le.\n", ngay, thang, nam);
    }

    return 0;
}
