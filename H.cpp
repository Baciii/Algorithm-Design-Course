//#include<iostream>
//#include<algorithm>
//using namespace std;
//int seek(int* data, int tar, int n) {//找第一个大于tar的数
//	int left = 1, right = n;
//	while (left < right) {
//		int mid = left + (right - left) / 2;
//		if (data[mid] <= tar) {
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
//	data[0] = 0;
//	for (int i = 1;i <= n;i++) {
//		cin >> data[i];
//	}
//	sort(data + 1, data + n + 1);
//	while (m--) {
//		int temp;
//		cin >> temp;
//		if (temp > 1000 || temp >= data[n]) {
//			cout << 0 << endl;
//		}
//		else if (temp < -1000) {
//			cout << n << endl;
//		}
//		else {
//			cout << n - seek(data, temp, n) + 1 << endl;
//		}
//	}
//	return 0;
//}