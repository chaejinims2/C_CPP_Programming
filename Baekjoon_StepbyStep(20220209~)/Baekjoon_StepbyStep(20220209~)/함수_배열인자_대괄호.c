#include <stdio.h>

void printArray(int arr[], int cnt) {
	for (int i = 0; i < cnt; i++) 
		printf("%d", arr[i]);
	printf("\n");
}

int main() {
	int numArr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	printArray(numArr, sizeof(numArr) / sizeof(int));

	return 0;
}








/*
반환값자료형 함수이름(자료형 매개변수[]) { }
*/