#include <stdio.h>
static int i=0;
void sub(int v)
{
    static int a=10;
    printf("\n %d ",a-v);
}
int main()
{
    auto int s=5; register int c=10; int b=10;
    ++i;
    printf("%d %d %d",i,s,i+s+c+b);
    sub(s);
}
extern int b;
