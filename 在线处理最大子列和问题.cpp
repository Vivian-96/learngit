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
        ThisSum += A[i];//�����ۼ�
    if(ThisSum > MaxSum)
        MaxSum = ThisSum;//���ָ������ˢ�µ�ǰ���
    else if(ThisSum < 0)//�����ǰ���к�Ϊ��
        ThisSum = 0;//�򲻿���ʹ����Ĳ��ֺ���������֮
    }
    return MaxSum;
}

int main()
{
    int a[10],n = 10,result;
    cout << "Please enter 10 integer numbers:";// << endl;
    for(int i = 0;i < 10;i++)
        cin >> a[i];//��������
    result = MaxSubseqSum(a,n);
    cout << "The Max subsequence sum is " << result << endl;
    return 0;
}
