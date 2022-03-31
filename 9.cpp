//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		long long* a = new long long[n + 1];
//		for (int i = 1;i <= n;i++)
//		{
//			cin >> a[i];
//		}
//		long long ans = 0;
//		for (int i = 1;i < n;i++)
//		{
//			for (int j = i + 1;j <= n;j++)
//			{
//				for (int k = 1;k <= n;k++)
//				{
//					if (k == i || k == j)
//						continue;
//					if (((a[i] + a[j]) ^ a[k]) > ans)
//						ans = (a[i] + a[j]) ^ a[k];
//				}
//			}
//		}
//		cout << ans << endl;
//	}
//}