#include <stdio.h>
#include <stdbool.h>

// Ham kiem tra so nguyen to
bool kiemTraNguyenTo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num1, num2;

    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    if (kiemTraNguyenTo(num1)) {
        printf("%d la so nguyen to.\n", num1);
    } else {
        printf("%d khong phai la so nguyen to.\n", num2);
    }

    if (kiemTraNguyenTo(num2)) {
        printf("%d la so nguyen to.\n", num2);
    } else {
        printf("%d khong phai la so nguyen to.\n", num2);
    }

    return 0;
}

