//1. ����ü�� ������ Ȱ���Ͽ� �����ϱ�
//2. ����ü�� ������ Ȱ���Ͽ� ���ϱ�

#include <stdio.h>

typedef struct _Num {
	int a;
	int b;
}Num;

int swap(Num* s1, Num* s2) {
	Num cpy;

	cpy = *s1;
	*s1 = *s2;
	*s2 = cpy;
}

int mul(Num* s1) {
	Num 
}

int main() {
	Num ex1 = { 1, 2 };
	Num ex2 = { 3, 4};

	printf(" present ex1 :  %d , %d \n", ex1.a, ex1.b);
	printf(" present ex2 :  %d , %d \n", ex2.a, ex2.b);

	swap(&ex1, &ex2);

	printf(" swapped ex1 :  %d , %d \n", ex1.a, ex1.b);
	printf(" swapped ex2 :  %d , %d \n", ex2.a, ex2.b);

	return 0;
}