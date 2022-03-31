//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//int dp[220][11];
////dp[i][j] 表示 i 分成 j 份。由于每份不为 0 ，则 dp[i][j] = dp[i - j][j] + dp[i - 1][j - 1]
////dp[i - j][j] 表示先拿出 j 个 1 放在 j 份上，保证都不为 0，再把剩下的分 j 份，即每份都大于 1
////dp[i - 1][j - 1] 表示第 j 份只有 1 个，剩下的 i - 1 个分配给其他的 j - 1 份，这样保证第 j 份是最少的，不会重复
////n,k （6 < n ≤ 200，2 ≤ k ≤ 6）
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

