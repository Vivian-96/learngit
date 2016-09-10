#include<iostream>
#include<cstdlib>
#include<ctime>
using std :: cout;
using std :: cin;
using std :: endl;

//���Ա��˳��洢�ṹ
#define MAXSIZE 100
#define OK 1
#define ERROR -1
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElementType;//����Ԫ�ػ�����������

//����ṹ
//˳��洢�ṹ������һά����ʵ��
typedef struct
{
    ElementType data[MAXSIZE];
    int length;//��ǰ������
}List;

//����Щ����
//1.��ʼ��������һ���յ����Ա�
Status InitList(List *L)
{
    int i = 0;
    while(i < MAXSIZE)
    {
        L->data[i] = NULL;
        ++i;
    }
    L->length = 0;//L->length��ͬ��(*L).length
    return OK;
}

//2.�ж����Ա��Ƿ�Ϊ��
Status ListEmpty(List L)
{
    if(0 == L.length)
    {
        return TRUE;
    }
    else
    {
        return FALSE;

    }
}

//3.���Ա��������
Status CreateList(List* L,int n)
//��������Ϊn�����Ա�
{
    if(n > MAXSIZE || n < 1)
    {
        return ERROR;
    }
    srand(time(0));/*srand(time(0)) ���Ǹ�����㷨һ���������ӣ�Ҳ�����㷨�������������
                     ��������Ժ�ſ��Բ��������,��1970.1.1�������������ʼ����������ӡ�
����                 Srand�������������������ÿ�����µ����Ӳ�һ������Rand�õ���������Ͳ�
                     һ����Ϊ��ÿ������һ����һ�������ӣ����Ծ�ѡ��Time(0)��Time(0)�ǵõ���ǰʱʱ��ֵ
                    ����Ϊÿʱÿ��ʱ���ǲ�һ�����ˣ���*/
    for(int i = 0;i < n;i++)
    {
        L->data[i] = rand()%100 + 1;/*rand()��ش�һ������
                                     rand()%100 �������� 0~99֮��
                                     ��+1 ����1~100֮��*/

    }
    L->length = n;
    return OK;
}

//4.���Ա�Ԫ�صĻ�ȡ
Status GetElement(List L,int i,ElementType *e)
//�����Ա��i��λ���ϵ�Ԫ�ط��ظ�e
{
    if(i > MAXSIZE || i < 1 || i > L.length)
    {
        return ERROR;
    }
    else
    {
        *e = L.data[i-1];
    }
    return OK;
}

//5.���Ա����Ԫ��
Status InsertElement(List* L,int i,ElementType e)
//�ڵ�i��λ���ϲ���Ԫ��e
{
    if(MAXSIZE == L->length)
    {
        cout << "�ռ�����!" << endl;
        return ERROR;
    }
    if(i < 1 || i > (L->length+1))
    {
        cout << "����Ԫ��λ�ó���!" << endl;
        return ERROR;
    }
    //���������Ԫ�ض�Ҫ����
    int j;
    for(j = L->length;j >= i;j--)
    {//ԭ�����Ա��е�i��Ԫ�ص����һ��Ԫ�����������ƶ�
        L->data[j] = L->data[j-1];
    }
    L->data[i-1] = e;
    ++(L->length);//��������Ա��ȼ�1
    return OK;
}

//6.���Ա�ɾ��Ԫ��
Status DeleteElement(List* L,int i,ElementType* e)
//ɾ����i��λ�õ�Ԫ�أ�����ֵ���ظ�e
{
    if(i < 1 || i > L->length)
    {
        cout << "ɾ��Ԫ��λ������!" << endl;
        return ERROR;
    }
    *e = L->data[i-1];
    int j;
    for(j = i;j < L->length;j++)
    {//ԭ���Ա��е�i+1~L->length��λ�õ�Ԫ������ǰ��
        L->data[j-1] = L->data[j];
    }
    --(L->length);
    return OK;
}

//7.���Ա������ɾ��
Status DeleteList(List* L)
{
    if(TRUE == ListEmpty(*L))
    {
        cout << "��ǰ���Ա��Ѿ�Ϊ�գ����ؽ��д������!" << endl;
        return ERROR;
    }

    for(int i = 0;i < L->length;i++)
    {
        L->data[i] = NULL;
    }
    L->length = 0;
    return OK;
}


//������
int main()
{
    List L;
    if(OK == InitList(&L))
    {
        cout << "��ʼ���ɹ�����ǰ���Ա���Ϊ" << L.length << endl;
    }
    else
    {
        cout << "��ʼ��ʧ��!" << endl;
    }
    cout << endl;
    if(TRUE == ListEmpty(L))
    {
        cout << "���Ա�Ϊ��!" << endl;
    }
    cout << endl;


    cout << "������Ҫ���������Ա�(������ֵ��ΧΪ1~100)����:";
    int i,n;
    cin >> n;
    if(OK == CreateList(&L,n))
       {
           for( i = 0;i < n;i++)
            {
                cout << L.data[i] << "    ";
            }
            cout << endl;
            cout << "����Ϊ" << n << endl;
       }

    cout << "������Ҫ�����Ԫ�ص�λ�ü���ֵ���ÿո�ָ�" << endl;
    int location,e;
    cin >> location >> e;
    if(OK == InsertElement(&L,location,e))
    {
        cout << "���������Ա�Ϊ:" << endl;
        for(i = 0;i < L.length;i++)
        {
            cout << L.data[i] << "    ";
        }
        cout << endl;
        cout << "��ǰ���Ա�ĳ���Ϊ:"  << L.length << endl;
    }


    cout << endl << "������Ҫɾ����Ԫ��λ��:";
    cin >> location;
    cout << endl;
    if(OK == DeleteElement(&L,location,&e))
    {
        cout << endl << "ɾ���ĵ�" << location << "��Ԫ����" << e << endl;
        cout << endl << "ɾ��������Ա�Ϊ:" << endl;
        for(i = 0;i < L.length;i++)
        {
            cout << L.data[i] << "   ";
        }
        cout << endl;
        cout << endl << "��ǰ���Ա�ĳ���Ϊ" << L.length << endl;
    }

    cout << endl << "������Ա�" << endl;
    if(OK == DeleteList(&L))
    {
        cout << endl << "���Ա���Ϊ" << L.length << "����ճɹ�!" << endl;
    }
    else
    {
        cout << "���ʧ��!" << endl;
    }
    return 0;
}

