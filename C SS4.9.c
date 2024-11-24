#include <stdio.h>

int main() {
    int d, m, y;

    printf("Nhap vao ngay, thang, nam:\n");
    scanf("%d %d %d", &d, &m, &y);

    if (d > 0 && d <= 31 && m > 0 && m <= 12 && y > 0) {
        if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
            printf("Ngay thang nam khong hop le");
        } 
		else if (m == 2) {
            if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
                if (d > 29) {
                    printf("Ngay thang nam khong hop le");
                } else {
                    printf("Ngay thang nam hop le");
                }
            } else {
                if (d > 28) {
                    printf("Ngay thang nam khong hop le");
                } else {
                    printf("Ngay thang nam hop le");
                }
            }
        } else {
            printf("Ngay thang nam hop le");
        }
    } else {
        printf("Ngay thang nam khong hop le");
    }

    return 0;
}
