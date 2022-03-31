#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
long long abpow(long long a, long long b)
{
	if (b == 0) {
		return 1;
	}
	if (b == 1) {
		return a;
	}
	else {
		if (b % 2 == 0) {
			long long temp = abpow(a, b / 2);
			return temp * temp;
		}
		else {
			long long temp = abpow(a, (b - 1) / 2);
			return temp * temp * a;
		}
	}
}
int main() 
{
	int t;
	scanf("%d", &t);
	while (t--) {
		long long a, b, p;
		scanf("%lld%lld%lld", &a, &b, &p);
		long long ans = abpow(a, b);
		cout << ans << endl;
		printf("%lld\n", ans % p);
	}
	return 0;
}