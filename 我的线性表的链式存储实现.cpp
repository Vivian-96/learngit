
/*
2016.9.18
by Vivian-96
The chain of the linear table storage
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>

using std :: cout;
using std :: cin;
using std :: endl;

typedef int ElementType;
typedef int Status;

//define structure
typedef struct LNode
{
    ElementType data;
    struct LNode *next;
}LinkList;

LinkList *p,*q,*L;

//main operations
//1.initialization list
void InitList(LinkList *&L)
{
    L = (LinkList *)malloc(sizeof(LinkList));//allocat storage for head node
    if(L == NULL)
    {
        cout << "��ʼ��ʧ�ܣ�" << endl;
        exit(1);
    }
    L->next = NULL;
    return;
}

//2.intialize by head
void InsertFirstList(LinkList *&L,ElementType e)
{
    p = (LinkList *)malloc(sizeof(LinkList));
    if(p == NULL)
    {
        cout << "�ڴ治�㣬����ֵʧ�ܣ�" << endl;
        exit(1);
    }
    p->data = e;
    p->next = L;
    L = p;//��ʱp�ͱ���������ͷ��㣬���������L�������ͷ��㣬���Ҫ��p����L������L����ָ��ͷ�����
    return;
}

//3.intialize by tail
void InsertLastList(LinkList *&L,ElementType e)
{
    p = q = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    if(p == NULL)
    {
        cout << "�ڴ治�㣬����ʧ�ܣ�" << endl;
        exit(1);
    }
    while(p->next != NULL)
    {
        p = p->next;
    }
    q->data = e;
    q->next = p->next;
    p->next = q;
    return;
}

//4.traverse list by head
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

//5.traverse by tail
void ShowLastList(LinkList *&L)
{
    p = (LinkList *)malloc(sizeof(LinkList));
    p = L->next;
    if(p ==  NULL)
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

//6.the length of list
Status ListLength(LinkList *L)
{
    int cnt = 0;
    p =  (LinkList *)malloc(sizeof(LinkList));
    p = L;
    while(p->next != NULL)
    {
        cnt++;
        p = p->next;
    }
    return cnt;
}


//7.get an element
ElementType GetElement(LinkList *&L,int i,ElementType e)
{
    int j = 0;
    p = (LinkList *)malloc(sizeof(LinkList));
    p = L->next;
    while(j < i && p != NULL)
    {
        j++;
        p = p->next;
    }
    if(p == NULL)
    {
        cout << "�ý�㲻���ڣ�" << endl;
    }
    else
    {
        e = p->data;
        return e;
    }
}

//8.insert element
Status InsertList(LinkList *&L,int i,ElementType e)
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
        cout << "�ý�㲻���ڣ�" << endl;
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

//9.delete an element
Status DeleteElement(LinkList *&L,int i)
{
    int cnt = 0;
    p = q = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    while(cnt < i && p->next != NULL)
    {
        cnt++;
        p = p->next;
    }
    if(p->next == NULL)
    {
        cout << "�ý�㲻���ڣ�" << endl;
        return 0;
    }
    else
    {
        q = p->next;
        p->next = q->next;
        free(q);
        return 1;
    }
}

//10.destroy list
void DestroyList(LinkList *&L)
{
    p = q = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    q = p->next;
    while(q != NULL)
    {
        p = q;
        free(q);
        q = p->next;

    }
    free(L);
    return;
}

//main function
int main()
{
    int i,a[10] = {0,1,2,3,4,5,6,7,8,9},ans;
    LinkList *L;
    InitList(L);
    cout << "�ñ�ͷ����ֵ�ķ�����������и�ֵ��" << endl;
    for(i = 0;i < 10;i++)
    {
        InsertFirstList(L,a[i]);
    }
    cout << "��ֵ�ɹ���" << endl;

    cout << "�ñ�ͷ����ֵ�ķ�����������" << endl;
    ShowFirstList(L);
    cout << "��������Ϊ" << ListLength(L) << endl;

    if(ans = GetElement(L,0,ans))
       {
           cout << "��ȡ�ĵ�0��Ԫ����" << ans << endl;
       }

    if(InsertList(L,5,100))
        {
            cout << "�ڵ�5��λ���ϲ���Ԫ�غ������Ϊ��" << endl;
            ShowFirstList(L);
        }
    if(DeleteElement(L,2))
    {
        cout << "ɾ����2��Ԫ�غ������Ϊ" << endl;
        ShowFirstList(L);
    }

    DestroyList(L);
    return  0;
}
