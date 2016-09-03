#include<iostream>
using std :: cout;
using std :: cin;
using std :: endl;

int MaxSubseqSum(int A[],int N)
{
    int ThisSum, MaxSum;
    int i;
    ThisSum = MaxSum = 0;
    for(i = 0;i < N;i++)
    {
        ThisSum += A[i];//向右累加
    if(ThisSum > MaxSum)
        MaxSum = ThisSum;//发现更大和则刷新当前结果
    else if(ThisSum < 0)//如果当前子列和为负
        ThisSum = 0;//则不可能使后面的部分和增大，抛弃之
    }
    return MaxSum;
}

int main()
{
    int a[10],n = 10,result;
    cout << "Please enter 10 integer numbers:";// << endl;
    for(int i = 0;i < 10;i++)
        cin >> a[i];//输入数列
    result = MaxSubseqSum(a,n);
    cout << "The Max subsequence sum is " << result << endl;
    return 0;
}
