//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//long long sum[1000001];
//int main() {
//	long long n, m;
//	while (scanf("%lld%lld", &n, &m) != EOF) {
//		long long temp;
//		for (int i = 1;i <= n;i++) {
//			scanf("%lld", &temp);
//			sum[i] = sum[i - 1] + temp;
//		}
//		while (m--) {
//			long long l, r;
//			scanf("%lld%lld", &l, &r);
//			printf("%lld\n", sum[r] - sum[l - 1]);
//		}
//	}
//}