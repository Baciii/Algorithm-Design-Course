//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int seek(int* data, int tar, int n) {
//	int left = 1, right = n;
//	while (left < right) {
//		int mid = left + (right - left) / 2;
//		if (data[mid] < tar) {
//			left = mid + 1;
//		}
//		else {
//			right = mid;
//		}
//	}
//	return left;
//}
//int main() {
//	int n, m;
//	cin >> n >> m;
//	int* data = new int[n + 1];
//	for (int i = 1;i <= n;i++) {
//		scanf("%d", &data[i]);
//	}
//	int temp;
//	while (m--) {
//		scanf("%d", &temp);
//		printf("%d\n", seek(data, temp, n));
//	}
//	return 0;
//}