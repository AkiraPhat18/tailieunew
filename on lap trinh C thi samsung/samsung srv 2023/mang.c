#include <stdio.h>
#include <string.h>

int main() {
    char a[5][20] = {"Lam Anh", "Phat", "Trang", "Huy", "Tuan"};
    strcpy(a[0], "Lam Anh baby"); // Thay doi gia tri cua phan tu
    
    printf("%s\n", a[0]);
    printf("%s\n", a[1]);
    printf("%s\n", a[2]);
    printf("%s\n", a[3]);
    printf("%s\n", a[4]);
    //%s de in ra ky tu chuoi
    
    return 0;
}
