#include<iostream>
#include<cstdlib>
#include<cstdio>

using std :: cout;
using std :: cin;
using std :: endl;


typedef int ElementType;
typedef int Status;

//����ṹ
typedef struct LNode
{
    ElementType data;
    struct LNode *next;//ָ��LNode��ָ�룬LNode��ʱ��δ������ȫ��ȴ�������ڲ�ʹ��
                       //���ڷ���ȫ���ͣ���ʱ����ʹ�������û�ָ�룬������ʹ�������
                       //��Ϊ��������ռ䡣��ָ������ÿ���ʹ�ã�����Ϊ������һ��ָ����ĳһʵ��
}LinkList;

LinkList *p,*q,*L;


//��Ҫ����
//1.����ĳ�ʼ��������һ����ͷ��������
void InitList(LinkList *&L)//�β�L��һ��ָ��ָ�������
{
    L = (LinkList *)malloc(sizeof(LinkList));//Ϊͷ�������ڴ�
    if(L == NULL)
    {
        cout << "�����ʼ��ʧ�ܣ�" << endl;
        exit(1);
    }
    L->next = NULL;
    return;
}

//2.Ϊ����ֵ��ͷ������ֵ��
void InsertFirstList(LinkList *&L,ElementType e)
{
    p = (LinkList *)malloc(sizeof(LinkList));
    if(p == NULL)
    {
        cout << "����Ϊ�գ�����ֵʧ�ܣ�" << endl;
        exit(1);
    }
    p->data = e;
    p->next = L;
    L = p;
    return;
}

//3.Ϊ����ֵ��β����ֵ��
void InsertLastList(LinkList *&L,ElementType e)
{
    q = p = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    if(p == NULL)
    {
        cout << "����Ϊ�գ�����ֵʧ�ܣ�" << endl;
        exit(1);
    }
    //���ҵ�β��㣬�ٲ���ֵ
    while(p->next != NULL)
    {
        p = p->next;
    }
    q->data = e;
    q->next = p->next;
    p->next = q;
    return;
}

//4.������������ͷ����ֵ�����ı�����
void ShowFirstList(LinkList *&L)
{
    p = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    if(p == NULL)
    {
        cout << "����Ϊ�գ�����ʧ�ܣ�" << endl;
        exit(1);
    }
    while(p->next != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    return;
}

//5.������������β����ֵ�����ı�����
void ShowLastList(LinkList *&L)
{
    p = (LinkList *)malloc(sizeof(LinkList));
    p = L->next;//��ñ�ͷ���
    if(p == NULL)
    {
        cout << "����Ϊ�գ�����ʧ�ܣ�" << endl;
        exit(1);
    }
    while(p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
    return;
}

//6.�������Ľ�����������ȣ���������
int ListLength(LinkList *L)
{
    int cnt = 0;
    p = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    while(p->next != NULL)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}

//7.����ĳԪ�صĻ�ȡ����һɨ�����Ա�L��������ڵ�i����㣬����ֵ����e���أ�
ElementType GetElement(LinkList *&L,int i,ElementType e)
{
    int j = 0;
    p =  (LinkList *)malloc(sizeof(LinkList));
    p = L->next;
    while(j < i && p != NULL)
    {
        j++;
        p = p->next;
    }
    if(p == NULL)
    {
        cout << "�����ڸý�㣡" << endl;
    }
    else
    {
        e = p->data;
        return e;
    }
}

//8.����Ԫ�أ���һɨ�����Ա�������ڵ�i����㣬����ֵΪe��Ԫ�ز��뵽���
int InsertList(LinkList *&L,int i,ElementType e)
{
    int cnt = 0;
    p = q = (LinkList *)malloc(sizeof(LinkList));
    p = L->next;
    while(cnt < i && p != NULL)
    {
        cnt++;
        p = p->next;
    }
    if(p == NULL)
    {
        cout << "�����ڸý�㣡" << endl;
        return 0;
    }
    else
    {
        q->data = e;
        q->next = p->next;
        p->next = q;
        return 1;
    }
}

//9.ɾ��Ԫ�أ���һɨ�����Ա�������ڵ�i��Ԫ�أ��ͽ���ɾ����
int DeleteElement(LinkList *&L,int i)
{
    int cnt = 0;
    p = q = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    //�ҳ���i�����
    while(cnt < i && p->next != NULL)
    {
        cnt++;
        p = p->next;
    }
    if(p->next == NULL)
    {
        cout << "�����ڸý�㣡" << endl;
        return 0;
    }
    q = p->next;//��Ҫɾ���Ľ���ַ����q
    p->next = q->next;
    free(q);
    return 1;
}

//10.���������
void DestroyList(LinkList *&L)
{
    q = p = (LinkList *)malloc(sizeof(LinkList));
    p = L;//�õ�ͷ���ĵ�ַ
    q = p->next;
    //��һ�Խ����ڴ�����ͷ�
    while(q != NULL)
    {
        p = q;
        free(q);
        q = p->next;
    }
    free(L);//��ͷ�������ͷ�
    return;
}

//������
int main()
{
    int i,a[10] = {2,4,6,8,10,12,14,16,18,20},ans;
    LinkList *L;
    InitList(L);
    cout << "�ñ�β����ֵ�ķ���������ֵ��" << endl;
    cout << "��ֵ�ɹ���" << endl;
    for(i = 0;i < 10;i++)
    {
        InsertLastList(L,a[i]);
    }
    cout << "�ñ�β����ֵ�ķ�����������" << endl;
    ShowLastList(L);
    cout << "����Ľ����Ϊ��" << ListLength(L) << endl;
    if(ans = GetElement(L,0,ans))
    {
        cout << "��ȡ��0��Ԫ�سɹ�����Ԫ��Ϊ" << ans << endl;
    }
    if(InsertList(L,5,100))
    {
       cout << "�ڵ�6��λ�ò����µ�Ԫ�غ�����Ϊ" << endl;
       ShowLastList(L);
    }
    if(DeleteElement(L,4))
    {
        cout << "ɾ����5��Ԫ�غ��µ�����Ϊ" << endl;
        ShowLastList(L);
    }
    DestroyList(L);
    return 0;
    //system("pause");
}






























