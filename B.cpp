//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//const int mod = 100003;
//int n, k;
//int ans[1111111];
//int main() {
//	while (scanf("%d%d", &n, &k) != EOF) {
//		ans[0] = 1;
//		for (int i = 1;i <= n;i++) {
//			for (int j = 1;j <= k && j <= i;j++) {//jС�ڵ�������� jС�ڵ����ܲ���
//				ans[i] += ans[i - j];//�������n-1��n-k�����
//			}
//			ans[i] = ans[i] % mod;
//		}
//		printf("%d\n", ans[n]);
//	}
//	return 0;
//}