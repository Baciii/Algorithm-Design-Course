//#include<iostream>
//#include<math.h>
//#include<algorithm>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int* data = new int[n + 1];
//	for (int i = 1;i <= n;i++) {
//		cin >> data[i];
//	}
//	int ans1 = 1, ans2 = 2;
//	int temp = abs(data[1] + data[2]);
//	for (int i = 1;i < n;i++) {
//		for (int j = i + 1;j <= n;j++) {
//			if (abs(data[i] + data[j]) < temp) {
//				ans1 = i;
//				ans2 = j;
//				temp = abs(data[i] + data[j]);
//			}
//		}
//	}
//	cout << ans1 << " " << ans2 << endl;
//	return 0;
//}