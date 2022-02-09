long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) ans += a[i];
	return ans;
}


/*
0. 모든 배열 0으로 초기화
	int num[9684] = { 0 };

1. 함수 배열 매개변수
 - 매개변수 명 뒤에 []
 - 매개변수를 포인터로 지정

*/