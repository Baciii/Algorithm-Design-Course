//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int* a = new int[n + 1];
//	int* b = new int[n + 1];
//	for (int i = 1;i <= n;i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1;i <= n;i++)
//	{
//		cin >> b[i];
//	}
//
//	int ansl = a[1];
//	int ansr = b[1];
//	for (int i = 2;i <= n;i++)
//	{
//		if (a[i] > ansr)
//		{
//			cout << 0 << endl;
//			return 0;
//		}
//		if (b[i] < ansl)
//		{
//			cout << 0 << endl;
//			return 0;
//		}
//		ansl = a[i] > ansl ? a[i] : ansl;
//		ansr = b[i] > ansr ? ansr : b[i];
//	}
//	cout << ansr - ansl + 1 << endl;
//	return 0;
//}