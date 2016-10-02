/*************************************************************************
    > File Name: binarySearch.cpp
	> Fig.2-9 有序数列到二分查找。
    > Author: ma6174
    > Mail: ma6174@163.com 
    > Created Time: 2016年10月02日 星期日 22时25分28秒
 ************************************************************************/

#include<iostream>
using namespace std;

int binarySearch(int a[], int key, int length)
{
	if (a == NULL || length <= 0)
	{
		return -1;
	}

	int beg = 0;
	int end = length - 1;
	int mid;
	while (beg <= end)
	{
		mid = (beg + end)/2;
		if (a[mid] == key)
		{
			return mid;
		} else if (a[mid] < key)
		{
			beg = mid + 1;
		} else
		{
			end = mid - 1;
		}
	}
	return -1;
}

int main()
{
	int a[5] = {
		1, 2, 3, 4, 5
	};

	cout << binarySearch(a, 1, 5) << endl;
	cout << binarySearch(a, 3, 5) << endl;

	return 0;
}
