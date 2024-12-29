#include <stdio.h>
#include <math.h>

int main() {
    float xA, yA, xB, yB, distance;
    printf("Nhap toa do diem A : ");
    scanf("%f %f", &xA, &yA);
    printf("Nhap toa do diem B : ");
    scanf("%f %f", &xB, &yB);


    distance = sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));

    printf("Khoang cach giua hai diem A va B la: %.2f\n", distance);

    return 0;
}
