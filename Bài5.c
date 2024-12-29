#include <stdio.h>

void nhiphan(int n);
int main() {
    int n;
    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);
    
    printf("Chuyen doi nhi phan cua %d la: ", n);
    nhiphan(n);  
    printf("\n");
    
    return 0;
}
void nhiphan(int n) {
    if (n > 1) {
        nhiphan(n / 2);  
    }
    printf("%d", n % 2);
}

