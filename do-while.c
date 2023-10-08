#include <stdio.h>
int main()
{
    int i;
    i=1;
    do
    {
        printf("%d\n", i);
        i=i+5;
    }
    while(i<=10);
    return 0;
}