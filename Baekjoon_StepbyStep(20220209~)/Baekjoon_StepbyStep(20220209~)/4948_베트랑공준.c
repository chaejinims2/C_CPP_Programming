#include <stdio.h> 


int main() {
	int n;

	while (1) {
		int cnt = 0;
		scanf("%d", &n);

		// n���� ũ�� 2n���� �۰ų� ���� �Ҽ��� ����
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
				//�̹� �Ҽ��� �ƴ� ���� Ȯ�������Ƿ� ���� Ż�� 
				break;
				*/
				}
			}
		}



		printf("%d", cnt);
	}

	return 0;


}