#include <stdio.h>


void sum(int a, int b) {
    int sum = a + b; // Tinh tong
    printf("Tong cua %d va %d la: %d\n", a, b, sum); 
}

int main() {
    int num1, num2;

    // Nhap hai so
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

   
    sum(num1, num2);

    return 0;
}

