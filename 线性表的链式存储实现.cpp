#include<iostream>
#include<cstdlib>
#include<cstdio>

using std :: cout;
using std :: cin;
using std :: endl;


typedef int ElementType;
typedef int Status;

//定义结构
typedef struct LNode
{
    ElementType data;
    struct LNode *next;//指向LNode的指针，LNode此时并未定义完全，却在自身内部使用
                       //对于非完全类型，此时可以使用其引用或指针，而不能使用其对象
                       //因为对象会分配空间。而指针和引用可以使用，是因为它并非一定指向了某一实例
}LinkList;

LinkList *p,*q,*L;


//主要操作
//1.链表的初始化，创建一个带头结点的链表
void InitList(LinkList *&L)//形参L是一个指向指针的引用
{
    L = (LinkList *)malloc(sizeof(LinkList));//为头结点分配内存
    if(L == NULL)
    {
        cout << "链表初始化失败！" << endl;
        exit(1);
    }
    L->next = NULL;
    return;
}

//2.为链表赋值（头结点插入值）
void InsertFirstList(LinkList *&L,ElementType e)
{
    p = (LinkList *)malloc(sizeof(LinkList));
    if(p == NULL)
    {
        cout << "链表为空，插入值失败！" << endl;
        exit(1);
    }
    p->data = e;
    p->next = L;
    L = p;
    return;
}

//3.为链表赋值（尾插入值）
void InsertLastList(LinkList *&L,ElementType e)
{
    q = p = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    if(p == NULL)
    {
        cout << "链表为空，插入值失败！" << endl;
        exit(1);
    }
    //先找到尾结点，再插入值
    while(p->next != NULL)
    {
        p = p->next;
    }
    q->data = e;
    q->next = p->next;
    p->next = q;
    return;
}

//4.遍历链表（链表头插入值方法的遍历）
void ShowFirstList(LinkList *&L)
{
    p = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    if(p == NULL)
    {
        cout << "链表为空，操作失败！" << endl;
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

//5.遍历链表（链表尾插入值方法的遍历）
void ShowLastList(LinkList *&L)
{
    p = (LinkList *)malloc(sizeof(LinkList));
    p = L->next;//获得表头结点
    if(p == NULL)
    {
        cout << "链表为空，操作失败！" << endl;
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

//6.获得链表的结点数（链表长度），并返回
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

//7.表中某元素的获取（逐一扫描线性表L，如果存在第i个结点，则将其值赋给e返回）
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
        cout << "不存在该结点！" << endl;
    }
    else
    {
        e = p->data;
        return e;
    }
}

//8.插入元素（逐一扫描线性表，如果存在第i个结点，则将其值为e的元素插入到其后）
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
        cout << "不存在该结点！" << endl;
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

//9.删除元素（逐一扫描线性表，如果存在第i个元素，就将其删除）
int DeleteElement(LinkList *&L,int i)
{
    int cnt = 0;
    p = q = (LinkList *)malloc(sizeof(LinkList));
    p = L;
    //找出第i个结点
    while(cnt < i && p->next != NULL)
    {
        cnt++;
        p = p->next;
    }
    if(p->next == NULL)
    {
        cout << "不存在该结点！" << endl;
        return 0;
    }
    q = p->next;//将要删除的结点地址赋给q
    p->next = q->next;
    free(q);
    return 1;
}

//10.链表的销毁
void DestroyList(LinkList *&L)
{
    q = p = (LinkList *)malloc(sizeof(LinkList));
    p = L;//得到头结点的地址
    q = p->next;
    //逐一对结点的内存进行释放
    while(q != NULL)
    {
        p = q;
        free(q);
        q = p->next;
    }
    free(L);//对头结点进行释放
    return;
}

//主函数
int main()
{
    int i,a[10] = {2,4,6,8,10,12,14,16,18,20},ans;
    LinkList *L;
    InitList(L);
    cout << "用表尾插入值的方法对链表赋值：" << endl;
    cout << "赋值成功！" << endl;
    for(i = 0;i < 10;i++)
    {
        InsertLastList(L,a[i]);
    }
    cout << "用表尾插入值的方法遍历链表：" << endl;
    ShowLastList(L);
    cout << "链表的结点数为：" << ListLength(L) << endl;
    if(ans = GetElement(L,0,ans))
    {
        cout << "获取第0个元素成功，该元素为" << ans << endl;
    }
    if(InsertList(L,5,100))
    {
       cout << "在第6个位置插入新的元素后链表为" << endl;
       ShowLastList(L);
    }
    if(DeleteElement(L,4))
    {
        cout << "删除第5个元素后新的链表为" << endl;
        ShowLastList(L);
    }
    DestroyList(L);
    return 0;
    //system("pause");
}






























