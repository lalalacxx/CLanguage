//���������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�
#include<stdio.h>
int search(int arr[], int k, int left, int right)
{
	while(left <= right)
	{
		int mid = left+(right-left)/2;
		if(arr[mid] ==  k)
		{
			return mid;
		}
		else if(arr[mid] < k)
		{
			left = mid+1;
		}
		else
		{
			right = mid-1;
		}
	}
	return -1;
}
int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int key = 6;
	int ret = search(arr, key,0,9);
	if(ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", ret);
	}
	return 0;
}