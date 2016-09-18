
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
        cout << "初始化失败！" << endl;
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
        cout << "内存不足，插入值失败！" << endl;
        exit(1);
    }
    p->data = e;
    p->next = L;
    L = p;//此时p就变成了链表的头结点，而定义的是L是链表的头结点，因此要将p赋给L，这样L就又指向头结点了
    return;
}

//3.intialize by tail
void InsertLastList(LinkList *&L,ElementType e)
{
    p = q = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    if(p == NULL)
    {
        cout << "内存不足，插入失败！" << endl;
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
        cout << "链表为空，遍历失败！" << endl;
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
        cout << "链表为空，遍历失败！" << endl;
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
        cout << "该结点不存在！" << endl;
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
        cout << "该结点不存在！" << endl;
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
        cout << "该结点不存在！" << endl;
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
    cout << "用表头插入值的方法对链表进行赋值：" << endl;
    for(i = 0;i < 10;i++)
    {
        InsertFirstList(L,a[i]);
    }
    cout << "赋值成功！" << endl;

    cout << "用表头插入值的方法遍历链表：" << endl;
    ShowFirstList(L);
    cout << "链表结点数为" << ListLength(L) << endl;

    if(ans = GetElement(L,0,ans))
       {
           cout << "获取的第0个元素是" << ans << endl;
       }

    if(InsertList(L,5,100))
        {
            cout << "在第5个位置上插入元素后的链表为：" << endl;
            ShowFirstList(L);
        }
    if(DeleteElement(L,2))
    {
        cout << "删除第2个元素后的链表为" << endl;
        ShowFirstList(L);
    }

    DestroyList(L);
    return  0;
}
