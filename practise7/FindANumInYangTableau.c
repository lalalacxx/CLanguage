//���Ͼ�����һ����ά����.�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
//�������������в���һ�������Ƿ����.ʱ�临�Ӷ�С��0(N);����:
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
					printf("�ҵ�Ԫ�أ���%d��%d��\n",row+1,col+1);
                    y=1;
		            break; 
	            }  
            }
		}
	}
	if(y==0)printf("��������\n");
	system("pause");
    return 0;
}