//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string inp;
//	cin >> inp;
//	int left = 0, right = 0;
//	for (int i = 0;i < inp.length();i++)
//	{
//		if (inp[i] != '0')
//		{
//			left = i;
//			break;
//		}
//	}
//	for (int i = inp.length() - 1;i >= 0;i--)
//	{
//		if (inp[i] != '0')
//		{
//			right = i;
//			break;
//		}
//	}
//	for (int i = left, j = right;i < j;i++, j--)
//	{
//		if (inp[i] != inp[j])
//		{
//			cout << "No" << endl;
//			return 0;
//		}
//	}
//	cout << "Yes" << endl;
//}