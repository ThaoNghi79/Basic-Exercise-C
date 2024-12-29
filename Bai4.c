#include <stdio.h>
#include <string.h>

int doixung(char str[]);
int main() {
    char str[100];
    
    printf("Nhap chuoi: ");
    scanf("%s", str);
    
    if (doixung(str)) {
        printf("Chuoi '%s' la chuoi doi xung.\n", str);
    } else {
        printf("Chuoi '%s' khong la chuoi doi xung.\n", str);
    }

    return 0;
}
int doixung(char str[]) {
    int i;
    int dai = strlen(str);
    for (i = 0; i < dai / 2; i++) {
        if (str[i] != str[dai - i - 1]) {
            return 0;  
        }
    }
    return 1;  
}