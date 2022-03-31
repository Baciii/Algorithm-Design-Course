//#include<iostream>
//#include<stack>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	long long* num = new long long[n + 1];
//	char* oper = new char[n];
//	// ‰»Î
//	int numOften = 0;
//	for (int i = 1;i <= n;i++)
//	{
//		cin >> num[i];
//		if (num[i] == 10)
//		{
//			numOften++;
//		}
//	}
//	for (int i = 1;i < n;i++)
//	{
//		cin >> oper[i];
//	}
//	char* express = new char[n * 2 + numOften];
//	for (int i = 1;i < n * 2 + numOften;i++)
//	{
//		express[i] = '.';
//	}
//	for (int i = 1,j=1;i <= n;i++,j+=2)
//	{
//		if (num[i] == 10)
//		{
//			express[j] = '1';
//			express[j + 1] = '0';
//			j++;
//		}
//		else
//		{
//			express[j] = num[i]+48;
//		}
//	}
//	
//	for (int i = 1,j = 1;i < n;i++)
//	{
//		while (express[j] != '.')
//		{
//			j++;
//		}
//		express[j] = oper[i];
//	}
//	stack<long long>number;
//	stack<char>op;
//	for (int i = 1;i < n * 2+numOften;i++)
//	{
//		if (express[i] >= '0' && express[i] <= '9')
//		{
//			if (express[i] == '0' && !number.empty())
//			{
//				long long temp = number.top() * 10;
//				number.pop();
//				number.push(temp);
//			}
//			else
//			{
//				number.push(express[i] - 48);
//			}
//		}
//		else if(express[i]=='+'|| express[i]=='-')
//		{
//			op.push(express[i]);
//		}
//		else
//		{
//			long long temp = number.top();
//			number.pop();
//			if (express[i + 2] == '0')
//			{
//				number.push(temp * 10);
//				i++;
//			}
//			else
//			{
//				number.push(temp * (express[i + 1] - 48));
//			}
//			i++;
//		}
//	}
//	stack<long long>number2;
//	stack<char>oper2;
//	while (!number.empty())
//	{
//		number2.push(number.top());
//		number.pop();
//	}
//	while (!op.empty())
//	{
//		oper2.push(op.top());
//		op.pop();
//	}
//	while (!oper2.empty())
//	{
//		if (oper2.top() == '+')
//		{
//			long long temp = number2.top();
//			number2.pop();
//			temp += number2.top();
//			number2.pop();
//			number2.push(temp);
//		}
//		else
//		{
//			long long temp = number2.top();
//			number2.pop();
//			temp -= number2.top();
//			number2.pop();
//			number2.push(temp);
//		}
//		oper2.pop();
//	}
//	cout << number2.top() << endl;
//}