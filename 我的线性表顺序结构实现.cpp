#include<iostream>
#include<cstdlib>
#include<ctime>

using std :: cout;
using std :: cin;
using std :: endl;

#define OK 1
#define TRUE 1
#define FALSE 0
#define ERROR -1
#define MAXSIZE 100

typedef int Status;
typedef int ElementType;


//define structure
typedef struct
{
    ElementType data[MAXSIZE];
    int length;
}List;

//main operations
//1.initialize,construct a empty list
Status InitList(List *L)//传入的参数是一个指向线性表的指针
{
    int i = 0;
    while(i < MAXSIZE)
    {
        L->data[i] = NULL;//将该数组的每一项都置空
        i++;
    }
    L->length = 0;//线性表的数组中每一项都为空，因此线性表长度为0
    return OK;
}

//2.judging the list is empty or not
Status IsEmpty(List L)
{
    /*
    int i = 0;
    while(i < 100)
    {
        if(L->data[i] = NULL)
            i++;
        else
            return FALSE;
    }
    if(i == MAXSIZE-1)
        return TRUE;
        */
    if(0 == L.length)
        return TRUE;
    else
        return FALSE;
}

//3.create a list
Status CreateList(List *L,int n)
{
    if(n < 1 || n > MAXSIZE)
    {
        return ERROR;
    }
    srand(time(0));
    for(int i = 0;i < n;i++)
    {
        L->data[i] = rand()%100 + 1;
    }
    L->length = n;
    return OK;
}

//4.get a element
Status GetElement(List L,int i,ElementType *e)
{
    if(i < 1 || i > MAXSIZE)
    {
        return ERROR;
    }
    else
    {
        *e = L.data[i];
    }
    return OK;
}

//5.insert an element
Status InsertElement(List *L,int i,ElementType e)
{
    if(MAXSIZE == L->length)
    {
        cout << "The lis is full!" << endl;
        return ERROR;
    }
    else if(i < 1 || i > L->length+1)
    {
        cout << "The inserting location is false!" << endl;
        return ERROR;
    }
    for(int j = L->length;j >= i;j--)
    {
        L->data[j] = L->data[j-1];
    }
    L->data[i-1] = e;
    ++(L->length);
    return OK;
}

//6.delete an element
Status DeleteElement(List *L,int i,ElementType *e)
{
    if(i < 1 || i > L->length)
    {
        cout << "The location of the element to be deleted is false!" << endl;
        return ERROR;
    }
    *e = L->data[i-1];
    for(int j = i;j < L->length;j++)
    {
        L->data[j-1] = L->data[j];
    }
    --(L->length);
    return OK;
}

//7.delete a list
Status DeleteList(List *L)
{
    if(IsEmpty(*L) == TRUE)
    {
        cout << "The list is empty,it is not necessary to delete it!" << endl;
        return ERROR;
    }

    for(int i = 0;i < L->length;i++)
    {
        L->data[i] = NULL;
    }
    L->length = 0;
    return OK;
}

int main()
{
    List L;
    if(OK == InitList(&L))
    {
        cout << "Initialization is successful!" << endl
             << endl << "The length of the list is " << L.length << endl;
    }
    else
    {
        cout <<  endl << "Initialization is failure!" << endl;
    }
    cout << endl;
    if(TRUE == IsEmpty(L))
    {
        cout << "The list is empty!" << endl;
    }
    else
    {
        cout << "The list is not empty!" << endl;
    }

    cout << endl;
    cout << "Please enter the length of the list that you want to create:";
    int n;
    cin >> n;
    if(OK == CreateList(&L,n))
    {
        for(int i = 0;i < n;i++)
        {
            cout << L.data[i] << " ";
        }
        cout << endl;
        cout << "The length of the list is " << n << endl;
    }
    cout << endl;

    cout << "Please enter the location and the element that you want to insert:";
    int e,location;
    cin >> location >> e;
    if(OK == InsertElement(&L,location,e))
    {
        for(int j = 0;j < L.length;j++)
        {
            cout << L.data[j] << " ";
        }
        cout << endl;
        cout << "The length of the list after inserting element is " << L.length << endl;
    }

    cout << endl;
    cout << "Please enter the location of element that you want to delete:";
    cin >> location;
    if(OK == DeleteElement(&L,location,&e))
    {
        cout << endl << "the deleted element is " << location << "th,it is " << e << endl;
        cout << endl << "after deleting element,the list is " << endl;
        for(int i = 0;i < L.length;i++)
        {
            cout << L.data[i] << " ";
        }
        cout << endl;
        cout << "The length of the list is " << L.length << endl;
    }

    cout << endl;
    cout << "Delete the list!" << endl;
    if(OK == DeleteList(&L))
    {
        cout << "Deletion is successful!" << endl;
        cout << "Now, its length is " << L.length << endl;
    }
    else
    {
        cout << "Deletion is failure!" << endl;
    }

    return 0;


}











