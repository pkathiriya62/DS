#include<stdio.h>
struct node{
    int data;
    char ch;
    struct node*ptr;
};
int main(){
    struct node a,b;
    a.ch='A';
    a.data=50;
    a.ptr=NULL;

    b.ch='a';
    b.data=105;
    b.ptr=NULL;

    a.ptr=&b;
    b.ptr=&a;

    printf("b:data:%d\tchar:%c\n",a.ptr->data,a.ptr->ch);
    printf("a:data:%d\tchar:%c\n",b.ptr->data,b.ptr->ch);
}