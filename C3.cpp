////#include<iostream>
////#include<math.h>
////using namespace std;
////const int maxn = 1e9 + 7;
////long long abpow(long long a, long long b)
////{
////	if (b == 0) {
////		return 1;
////	}
////	if (b == 1) {
////		return a;
////	}
////	else {
////		if (b % 2 == 0) {
////			long long temp = abpow(a, b / 2);
////			return temp * temp;
////		}
////		else {
////			long long temp = abpow(a, (b - 1) / 2);
////			return temp * temp * a;
////		}
////	}
////}
////int main() {
////	int n, m, k;
////	cin >> n >> m >> k;
////	long long *a = new long long [n + 1];
////	for (int i = 1;i <= n;i++)
////	{
////		a[i] = abpow(m, i) % maxn;
////	}
////
////}
//
//#include<iostream>
//using namespace std;
//const int maxn = 1e9 + 7;
//long long abpow(long long a, long long b)
//{
//	if (b == 0) {
//		return 1;
//	}
//	if (b == 1) {
//		return a;
//	}
//	else {
//		if (b % 2 == 0) {
//			long long temp = abpow(a, b / 2);
//			return temp * temp;
//		}
//		else {
//			long long temp = abpow(a, (b - 1) / 2);
//			return temp * temp * a;
//		}
//	}
//}
//void quicksort(int* t, int n, int left, int right)
//{
//	if (left > right)
//		return;
//	int i = left, j = right, tar = left;
//	t[0] = t[left];
//	while (i < j)
//	{
//		while (i < j)
//		{
//			if (t[j] < t[0])
//			{
//				t[tar] = t[j];
//				t[j] = t[0];
//				tar = j;
//				break;
//			}
//			j--;
//		}
//		while (i < j)
//		{
//			if (t[i] > t[0])
//			{
//				t[tar] = t[i];
//				t[i] = t[0];
//				tar = i;
//				break;
//			}
//			i++;
//		}
//	}
//	quicksort(t, n, left, i - 1);
//	quicksort(t, n, i + 1, right);
//	return;
//}
//int main()
//{
//		int n,m,k;
//		cin >> n >> m >> k;
//		int* t = new int[n + 1];
//		for (int i = 1;i <= n;i++)
//		{
//			t[i] = abpow(m, i) % maxn;
//		}
//		quicksort(t, n, 1, n);
//		cout << t[k] << endl;
//		return 0;
//}