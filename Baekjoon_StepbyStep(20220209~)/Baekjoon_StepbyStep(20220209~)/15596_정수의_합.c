long long sum(int* a, int n) {
	long long ans = 0;
	for (int i = 0; i < n; i++) ans += a[i];
	return ans;
}


/*
0. ��� �迭 0���� �ʱ�ȭ
	int num[9684] = { 0 };

1. �Լ� �迭 �Ű�����
 - �Ű����� �� �ڿ� []
 - �Ű������� �����ͷ� ����

*/