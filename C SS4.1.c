#include <stdio.h>

int main() {
	// Nhap mot so nguyen
	int number;
	printf("Moi ban nhap vao mot so nguyen: ");
	scanf("%d", &number);
	
	// Kiem tra so nguyen la am hay duong
	if (number > 0) {
        printf("��y l� so duong.\n");
    } else if (number < 0) { // Th�m kiem tra cho so �m
        printf("��y l� so �m.\n");
    } else { // Xu l� truong hop so 0
        printf("So ban nhap l� so 0.\n");
    }
	return 0;
}


