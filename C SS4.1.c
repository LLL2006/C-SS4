#include <stdio.h>

int main() {
	// Nhap mot so nguyen
	int number;
	printf("Moi ban nhap vao mot so nguyen: ");
	scanf("%d", &number);
	
	// Kiem tra so nguyen la am hay duong
	if (number > 0) {
        printf("Ðây là so duong.\n");
    } else if (number < 0) { // Thêm kiem tra cho so âm
        printf("Ðây là so âm.\n");
    } else { // Xu lý truong hop so 0
        printf("So ban nhap là so 0.\n");
    }
	return 0;
}


