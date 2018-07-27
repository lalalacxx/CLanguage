#include<stdio.h>
int FindNumOf0(int n)
{
    int count = 0;
    if(n>=1 && n<=1000)
    {
		int mul_res = 1;
		int i = 0;
        for(i = 1;i <= n;i++)
        {
			mul_res *= i;
        }
        while(mul_res)
        {
			int tmp = mul_res%10;
            if(tmp == 0)
            {
               count++;
            }
            mul_res = mul_res/10;
        }
    }
    return count;
}
int main()
{
    int n = 0;
    scanf("%d",&n);
    int ret = FindNumOf0(n);
    printf("%d\n",ret);
    return 0;
}