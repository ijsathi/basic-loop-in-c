#include <stdio.h>
int main()
{
    int i;
    for(i=1; i<=20; i++)
    {
        if(i==10)
        {
            continue;
        }
        printf("%d\n", i);
        
    }
    return 0;
}