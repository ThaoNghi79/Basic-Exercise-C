#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main() {
	float chuvi;
	float R;
	float S;

	printf("Nhap chu vi cua hinh tron: ");
	scanf("%f", &chuvi);

	R = chuvi / (2 * PI);
	S = PI * pow(R, 2);

	printf("Dien tich cua hinh tron la: %.2f\n", S);

	return 0;
}

