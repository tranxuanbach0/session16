#include <stdio.h>

int timKiemPhanTu(int *arr, int size, int giaTri) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == giaTri) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int giaTri = 7;

    int viTri = timKiemPhanTu(arr, size, giaTri);

    if (viTri != -1) {
        printf("Vi tri cua phan tu %d la: %d\n", giaTri, viTri);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", giaTri);
    }

    return 0;
}

