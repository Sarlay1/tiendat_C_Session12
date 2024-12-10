#include <stdio.h>

int timMax(int arr[], int kichThuoc) {
    int max = arr[0];
    for (int i = 1; i < kichThuoc; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    printf("So lon nhat trong mang la: %d\n", timMax(mang, n));

    return 0;
}

