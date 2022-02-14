#include <stdio.h> 


int main() {
	int n;

	while (1) {
		int cnt = 0;
		scanf("%d", &n);

		// n보다 크고 2n보다 작거나 같은 소수의 개수
		int i;
		int j;

		for (i = n+1; i < 2*n + 1; i++) {
			if (i == 1) 
				cnt++;
			else {
				for (j = 2; j < i; j++) {
					if(i)
						/*
						if (n % div == 0) {
				hasDiv = 1;
				//이미 소수가 아닌 것을 확인했으므로 루프 탈출 
				break;
				*/
				}
			}
		}



		printf("%d", cnt);
	}

	return 0;


}