#include <stdio.h>
int main()
{
    int a = 1, b = 2, c=1,d;
    c = a && b;
    printf("a:%d,b:%d,c:%d\n", a, b, c);
    c=a||b;
    printf("a:%d,b:%d,c:%d\n",a,b,c);
    c=++a&&b;
    printf("a:%d,b:%d,c:%d\n",a,b,c);
    c=++a||b;
    printf("a:%d,b:%d,c:%d\n",a,b,c);
    c=a&&++b;
    printf("a:%d,b:%d,c:%d\n",a,b,c);
    c=a||++b;
    printf("a:%d,b:%d,c:%d\n",a,b,c);
    c=++a&&++b;
    printf("a:%d,b:%d,c:%d\n",a,b,c);
    c=++a||++b;
    printf("a:%d,b:%d,c:%d\n",a,b,c);
    d = a && b || c;
    printf("a:%d,b:%d,c:%d,d:%d\n",a , b, c, d);
}
