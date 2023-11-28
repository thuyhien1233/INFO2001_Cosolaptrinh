#include <stdio.h>

int main() {
    int arr[10];
    int i;
    float sum = 0;

    // Input
    printf("Nhap diem hoc sinh trong lop:\n");
    for (i = 0; i < 10; i++) {
        printf("Nhap diem hoc sinh %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];  // Tinh tong diem
    }

    // Hien thi mang ban dau
    printf("\nDiem so cua hoc sinh:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    // Tinh diem trung binh
    float average = sum / 10;

    // Hien thi diem trung binh
    printf("\nDiem trung binh cua lop: %.2f\n", average);

    return 0;
}
