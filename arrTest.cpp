#include<iostream>
#include<vector>
#include<stdio.h>
class solution
{
public:
    bool Find(int target, std::vector<std::vector<int> > array)
    {
        int row = array.size();
        int col = array[0].size();
        int i = 0;
        int j = 0;
        for(i = 0,j = col-1;i < row && j >=0;)
        {
            if(target == array[i][j])
            {
                return true;
            }
            if(target < array[i][j])
            {
                j--;
                continue;
            }
            if(target > array[i][j])
            {
                i++;
                continue;
            }
        }
        return false;
    }
};
int main()
{
    std::vector<std::vector<int> > arr = {1,2,3,4,5,6,7,8,
        9,10,11,12,13,14,15,16};
    solution s;
    bool res = s.Find(0,arr);
    printf("expected(0):res = false\n");
    if(!res)
    {
        printf("actual(0):res = false\n");
    }
    res = s.Find(15,arr);
    printf("expected(15):res = true\n");
    if(!res)
    {
        printf("actual(15):res = false\n");
    }
    res = s.Find(17,arr);
    printf("expected(17):res = false\n");
    if(!res)
    {
        printf("actual(17):res = false\n");
    }
    return 0;
}
