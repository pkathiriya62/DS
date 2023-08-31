#include<stdio.h>
struct node{
    int data;
    char ch;
    struct node*ptr;
};
int main(){
    struct node a,b,c,d;
    a.ch='A';
    a.data=50;
    a.ptr=NULL;

    b.ch='a';
    b.data=105;
    b.ptr=NULL;

    c.ch='B';
    c.data=100;
    c.ptr=NULL;

    d.ch='b';
    d.data=107;
    d.ptr=NULL;
    

    a.ptr=&b;
    b.ptr=&a;
    c.ptr=&d;
    d.ptr=&c;

    printf("b:data:%d\tchar:%c\n",a.ptr->data,a.ptr->ch);
    printf("a:data:%d\tchar:%c\n",b.ptr->data,b.ptr->ch);
    printf("c:data:%d\tchar:%c\n",c.ptr->data,c.ptr->ch);
    printf("d:data:%d\tchar:%c\n",d.ptr->data,d.ptr->ch);
}