#include <stdio.h>
void BubbleSort1(int arr[],int size)
{
    if(size <= 1)
    {
        return;
    }
    int tmp = 0;
    int i = 0;
    for(;i < size;i++)
    {
        //优化1
        //int flag = 0;
        //这个flag用于标记一轮下来是否发生过元素交换
        
        int j = 0;
        for(;j < size-i-1;j++)
        {
            if(arr[j] < arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                //如果发生了交换就将flag置为1；
                //flag = 1;
            }
        }
        //一轮循环结束，判断是否有元素进行了交换
        //如果一直没有发生交换则flag一定是0
        //说明待排序的数已经有序了，所以才没有发生任何交换
        //if(flag == 0)
        //{
        //  break;//已经有序则直接跳出循环结束排序工作
        //}
    }
}
//优化2
void BubbleSort2(int arr[],int size)
{
    if(size <= 1)
    {
        return;
    }
    int i = 0;
    int tmp = 0;
    int sortBorder = size-1;
    int lastExchangeIndex = 0;
    for(;i < size;i++)
    {
        int flag = 0;
        int j = 0;
        for(;j < sortBorder;j++)
        {
            if(arr[j] < arr[j+1])
            {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] =tmp;
                //有元素交换。说明待排序的数字不是有序的
                flag = 1;
                //把最后一次交换的元素的位置保存下来
                lastExchangeIndex = j;
            }
        }
        if(flag == 0)
        {
            //如果有序直接跳出循环结束排序工作
            break;
        }
        //不是有序的则更新无序边界，继续循环进行排序
        sortBorder = lastExchangeIndex;
    }
}





void BubbleSort11(int arr[],int len)
{
    if(len <= 1)
    {
        return;
    }
    //[0,bound)为有序区间
    //[bound,len)为待排序区间
    int bound = 0;
    int tmp = 0;
    for(;bound < len;bound++)
    {
        int j = len-1;
        //int flag = 0;
        for(;j > bound;j--)
        {
            if(arr[j] > arr[j-1])
            {
                tmp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = tmp;
                //flag = 1;
            }
        }
        //if(flag == 0)
        //{
        //    break;
        //}
    }
}


int main()
{
    int arr[] = {5,8,6,3,9,2,1,7};
    //BubbleSort1(arr,8);
    //BubbleSort11(arr,8);
    BubbleSort2(arr,8);
    int i = 0;
    for(;i < 8;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
