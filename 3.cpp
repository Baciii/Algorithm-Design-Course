//#include<iostream>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int* total = new int[200];
//	for (int i = 0;i < 200;i++)
//	{
//		total[i] = 0;
//	}
//	int temp;
//	for (int i = 1;i <= n;i++)
//	{
//		cin >> temp;
//		total[temp % 200]++;
//	}
//	int ans = 0;
//	for (int i = 0;i < 200;i++)
//	{
//		if (total[i] >= 2)
//		{
//			ans += total[i] * (total[i] - 1) / 2;
//		}
//	}
//	cout << ans << endl;
//	return 0;
//}