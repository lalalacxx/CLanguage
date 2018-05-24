//杨氏矩阵，有一个二维数组.数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在.时间复杂度小于0(N);数组:
//123
//234
//345
//134
//245
//456
#include<stdio.h>
int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row,col;
    int key = 9;
    int y = 0;
    col = 0;row = 3-1;
    while(row>=0 && col<3)
    {
		if(arr[row][col] > key)
		{
			row--;
		}
	    else
		{
			if(arr[row][col] < key)
			{
				col++;
			}
			else
			{
				if(arr[row][col] == key)
	            {
					printf("找到元素，在%d行%d列\n",row+1,col+1);
                    y=1;
		            break; 
	            }  
            }
		}
	}
	if(y==0)printf("数不存在\n");
	system("pause");
    return 0;
}