//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//int main()
//{
//	stack<char>left;
//	string inp;
//	cin >> inp;
//	for (int i = 0;i < inp.length() - 1;i++)
//	{
//		if (left.empty() && (inp[i] == ')' || inp[i] == ']' || inp[i] == '}'))
//		{
//			cout << "No" << endl;
//			return 0;
//		}
//		else if (!left.empty() && (inp[i] == ')' || inp[i] == ']' || inp[i] == '}'))
//		{
//			if ((inp[i] == ')' && left.top() != '(') || (inp[i] == ']' && left.top() != '[') || (inp[i] == '}' && left.top() != '{'))
//			{
//				cout << "No" << endl;
//				return 0;
//			}
//			else
//			{
//				left.pop();
//			}
//		}
//		if (inp[i] == '(' || inp[i] == '[' || inp[i] == '{')
//		{
//			left.push(inp[i]);
//		}
//		
//	}
//	cout << "Yes" << endl;
//	return 0;
//}