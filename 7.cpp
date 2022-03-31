//#include<iostream>
//#include<queue>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int* score = new int[n + 1];
//	for (int i = 1;i <= n ;i++)
//	{
//		cin >> score[i];
//	}
//	queue<int>troops;
//	troops.push(1);
//	for (int i = 2;i <= n;i++)
//	{
//		if (score[troops.back()] < score[i])
//		{
//			if (troops.size() < 5)
//			{
//				troops.push(i);
//			}
//			else
//			{
//				troops.pop();
//				troops.push(i);
//			}
//		}
//	}
//	while (!troops.empty())
//	{
//		cout << troops.front() << " ";
//		troops.pop();
//	}
//}