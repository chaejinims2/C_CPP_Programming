/*//1. 구조체를 포인터 활용하여 스왑하기
//2. 구조체를 포인터 활용하여 곱하기

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
	Num cpy;
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
}*/

/*

#include <stdio.h>

int c, d;

int abc(int a, int b) {
	c = a * 10;
	d = b * 20;
}

main() {
	int a = 1, b = 2;
	abc(a, b);
	printf("a값: %d, b값: %d", c, d);
}*/

/*
#include <stdio.h>

void calculate(int, int, int*, int*, int*, int*);

int main(void) {

	int x = 7, y = 5;
	int add, sub, mul, div;

	calculate(x, y, &add, &sub, &mul, &div);

	printf("%d + %d = %d\n", x, y, add);
	printf("%d - %d = %d\n", x, y, sub);
	printf("%d * %d = %d\n", x, y, mul);
	printf("%d / %d = %d\n", x, y, div);


	return 0;
}

void calculate(int x, int y, int* add, int* sub, int* mul, int* div) {

	*add = x + y;
	*sub = x - y;
	*mul = x * y;
	*div = x / y;


}*/

/*
#include <stdio.h>

int mul(int, int, int*, int*);

int main() {

	int a = 1, b = 2;
	int opt1, opt2;

	mul(a, b, &opt1, &opt2);

	printf("%d * 10 = %d, %d * 20 = %d", a, opt1, b, opt2);

	return 0;
}

int mul(int x, int y, int* opt1, int* opt2) {
	*opt1 = x * 10;
	*opt2 = y * 20;
}*/

/*
#include <stdio.h>

struct _Calc {
	int add;
	int sub;
	int mul;
	int div;
};

typedef struct _Calc Calc;

Calc calculate(int, int);

int main(void) {

	Calc value;

	int x = 7;
	int y = 5;

	value = calculate(x, y);

	printf("%d + %d = %d\n", x, y, value.add);
	printf("%d - %d = %d\n", x, y, value.sub);
	printf("%d * %d = %d\n", x, y, value.mul);
	printf("%d / %d = %d\n", x, y, value.div);

	return 0;
}

Calc calculate(int x, int y) {
	Calc tmp;

	tmp.add = x + y;
	tmp.sub = x - y;
	tmp.mul = x * y;
	tmp.div = x / y;

	return tmp;
}
*/

/*
#include <stdio.h>

typedef struct _Oper {
	int rst_x;
	int rst_y;
}Oper;


Oper operater(int x, int y) {
	Oper tmp;

	tmp.rst_x = x * 10;
	tmp.rst_y = y * 20;

	return tmp;
}

int main() {
	Oper value;

	int a = 1;
	int b = 2;

	value = operator(a, b);

	printf("%d * 10 = %d, %d * 20 = %d", a, value.rst_x, b, value.rst_y);
}*/





