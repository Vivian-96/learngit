#include<iostream>
#include<cstdlib>
#include<ctime>
using std :: cout;
using std :: cin;
using std :: endl;

//线性表的顺序存储结构
#define MAXSIZE 100
#define OK 1
#define ERROR -1
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElementType;//定义元素基本数据类型

//定义结构
//顺序存储结构可以用一维数组实现
typedef struct
{
    ElementType data[MAXSIZE];
    int length;//当前链表长度
}List;

//有哪些操作
//1.初始化，建立一个空的线性表
Status InitList(List *L)
{
    int i = 0;
    while(i < MAXSIZE)
    {
        L->data[i] = NULL;
        ++i;
    }
    L->length = 0;//L->length等同于(*L).length
    return OK;
}

//2.判断线性表是否为空
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

//3.线性表的整表创建
Status CreateList(List* L,int n)
//创建长度为n的线性表
{
    if(n > MAXSIZE || n < 1)
    {
        return ERROR;
    }
    srand(time(0));/*srand(time(0)) 就是给这个算法一个启动种子，也就是算法的随机种子数，
                     有这个数以后才可以产生随机数,用1970.1.1至今的秒数，初始化随机数种子。
　　                 Srand是种下随机种子数，你每回种下的种子不一样，用Rand得到的随机数就不
                     一样。为了每回种下一个不一样的种子，所以就选用Time(0)，Time(0)是得到当前时时间值
                    （因为每时每刻时间是不一样的了）。*/
    for(int i = 0;i < n;i++)
    {
        L->data[i] = rand()%100 + 1;/*rand()会回传一个乱数
                                     rand()%100 乱数会介於 0~99之间
                                     再+1 会变成1~100之间*/

    }
    L->length = n;
    return OK;
}

//4.线性表元素的获取
Status GetElement(List L,int i,ElementType *e)
//将线性表第i个位置上的元素返回给e
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

//5.线性表插入元素
Status InsertElement(List* L,int i,ElementType e)
//在第i号位置上插入元素e
{
    if(MAXSIZE == L->length)
    {
        cout << "空间已满!" << endl;
        return ERROR;
    }
    if(i < 1 || i > (L->length+1))
    {
        cout << "插入元素位置超界!" << endl;
        return ERROR;
    }
    //插入后，其后的元素都要后移
    int j;
    for(j = L->length;j >= i;j--)
    {//原来线性表中第i个元素到最后一个元素依次往后移动
        L->data[j] = L->data[j-1];
    }
    L->data[i-1] = e;
    ++(L->length);//插入后，线性表长度加1
    return OK;
}

//6.线性表删除元素
Status DeleteElement(List* L,int i,ElementType* e)
//删除第i个位置的元素，并把值返回给e
{
    if(i < 1 || i > L->length)
    {
        cout << "删除元素位置有误!" << endl;
        return ERROR;
    }
    *e = L->data[i-1];
    int j;
    for(j = i;j < L->length;j++)
    {//原线性表中第i+1~L->length个位置的元素依次前移
        L->data[j-1] = L->data[j];
    }
    --(L->length);
    return OK;
}

//7.线性表的整表删除
Status DeleteList(List* L)
{
    if(TRUE == ListEmpty(*L))
    {
        cout << "当前线性表已经为空，不必进行此项操作!" << endl;
        return ERROR;
    }

    for(int i = 0;i < L->length;i++)
    {
        L->data[i] = NULL;
    }
    L->length = 0;
    return OK;
}


//主函数
int main()
{
    List L;
    if(OK == InitList(&L))
    {
        cout << "初始化成功，当前线性表长度为" << L.length << endl;
    }
    else
    {
        cout << "初始化失败!" << endl;
    }
    cout << endl;
    if(TRUE == ListEmpty(L))
    {
        cout << "线性表为空!" << endl;
    }
    cout << endl;


    cout << "输入想要创建的线性表(各项数值范围为1~100)长度:";
    int i,n;
    cin >> n;
    if(OK == CreateList(&L,n))
       {
           for( i = 0;i < n;i++)
            {
                cout << L.data[i] << "    ";
            }
            cout << endl;
            cout << "长度为" << n << endl;
       }

    cout << "输入想要插入的元素的位置及其值，用空格分隔" << endl;
    int location,e;
    cin >> location >> e;
    if(OK == InsertElement(&L,location,e))
    {
        cout << "插入后的线性表为:" << endl;
        for(i = 0;i < L.length;i++)
        {
            cout << L.data[i] << "    ";
        }
        cout << endl;
        cout << "当前线性表的长度为:"  << L.length << endl;
    }


    cout << endl << "输入想要删除的元素位置:";
    cin >> location;
    cout << endl;
    if(OK == DeleteElement(&L,location,&e))
    {
        cout << endl << "删除的第" << location << "个元素是" << e << endl;
        cout << endl << "删除后的线性表为:" << endl;
        for(i = 0;i < L.length;i++)
        {
            cout << L.data[i] << "   ";
        }
        cout << endl;
        cout << endl << "当前线性表的长度为" << L.length << endl;
    }

    cout << endl << "清空线性表！" << endl;
    if(OK == DeleteList(&L))
    {
        cout << endl << "线性表长度为" << L.length << "，清空成功!" << endl;
    }
    else
    {
        cout << "清空失败!" << endl;
    }
    return 0;
}

