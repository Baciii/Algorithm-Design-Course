//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//const int maxn = 1e5 + 10;
//int a[maxn], mergeTemp[maxn], n;
//int MergeSort(int left, int right)
//{
//    int ans = 0;
//    
//    return ans;
//}
//int main() {
//    while (scanf("%d", &n) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//            scanf("%d", &a[i]);
//        printf("%d\n", MergeSort(0, n));
//    }
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//int n;
//int mergesort(int* t, int left, int right)
//{
//	int sum = 0;
//	if (left == right)
//	{
//		return 0;
//	}
//	int mid = (left + right) / 2;
//	sum += mergesort(t, left, mid);
//	sum += mergesort(t, mid + 1, right);
//	int* temp = new int[right - left + 1];
//	int i = 0;
//	int j = left;
//	int k = mid + 1;
//	while (i < right - left + 1 && j <= mid && k <= right)
//	{
//		if (t[j] > t[k])
//		{
//			temp[i] = t[k];
//			k++;
//			sum += mid - j + 1;
//		}
//		else
//		{
//			temp[i] = t[j];
//			j++;
//		}
//		i++;
//	}
//	if (j > mid)
//	{
//		for (;k <= right;k++, i++)
//			temp[i] = t[k];
//	}
//	else if (k > right)
//	{
//		for (;j <= mid;j++, i++)
//		{
//			temp[i] = t[j];
//		}
//	}
//	int ans = left;
//	for (int i = 0;i < right - left + 1;i++, ans++)
//	{
//		t[ans] = temp[i];
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF) {
//		int* t = new int[n + 1];
//		t[0] = n;
//		for (int i = 1;i <= n;i++)
//			cin >> t[i];
//		printf("%d",mergesort(t, 1, n));
//	}
//	return 0;
//}

/*cin >> n;
int* t = new int[n + 1];
t[0] = n;
for (int i = 1;i <= n;i++)
	cin >> t[i];
cout << mergesort(t, 1, n) << endl;*/