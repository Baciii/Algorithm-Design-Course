//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//int dp[220][11];
////dp[i][j] ��ʾ i �ֳ� j �ݡ�����ÿ�ݲ�Ϊ 0 ���� dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1]
////dp[i - j][j] ��ʾ���ó� j �� 1 ���� j ���ϣ���֤����Ϊ 0���ٰ�ʣ�µķ� j �ݣ���ÿ�ݶ����� 1
////dp[i - 1][j - 1] ��ʾ�� j ��ֻ�� 1 ����ʣ�µ� i - 1 ������������� j - 1 �ݣ�������֤�� j �������ٵģ������ظ�
////n,k ��6 < n �� 200��2 �� k �� 6��
//int main() {
//	int n, k;
//	memset(dp, 0, sizeof(dp));
//	for (int i = 0;i <= 200;i++) {
//		dp[i][0] = 0;
//		dp[0][i] = 0;
//	}
//	dp[0][0] = 1;
//	while (scanf("%d%d", &n, &k) != EOF) {
//		for (int i = 1;i <= n;i++) {
//			for (int j = 1;j <= k && i >= j;j++) {
//				dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1];
//			}
//		}
//		cout << dp[n][k] << endl;
//	}
//	return 0;
//}

