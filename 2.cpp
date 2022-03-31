//#include<iostream>
//#include<math.h>
//using namespace std;
//int main() {
//	int r, x, y;
//	while (scanf_s("%d %d %d", &r, &x, &y) != EOF)
//	{
//		double dis = sqrt(pow(x, 2) + pow(y, 2));
//		if (dis == r)
//		{
//			cout << 1 << endl;
//			continue;
//		}
//		else if (dis  <= r * 2)
//		{
//			cout << 2 << endl;
//		}
//		else
//		{
//			int temp = int(dis);
//			if (dis - temp != 0)
//			{
//				temp++;
//			}
//			if (temp % r == 0)
//			{
//				cout << temp / r << endl;
//				continue;
//			}
//			else
//			{
//				cout << temp / r + 1 << endl;
//				continue;
//			}
//		}
//	}
//	return 0;
//}