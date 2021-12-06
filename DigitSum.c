#include<stdio.h>
#include<windows.h>

int DigitSum(int n)
{
    int sum = 0;
    if(n != 0)
    {
	sum = n % 10 + DigitSum(n / 10);
    }
    return sum;
}

int main()
{
    int i = 0;
    int ret = 0;
    printf("请输入：i = ");
    scanf("%d", &i);
    ret = DigitSum(i);
    printf("ret = %d\n", ret);
    system("pause");
    return;
}