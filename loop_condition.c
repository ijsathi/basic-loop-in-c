#include <stdio.h>
int main()
{
    int i;
    int sum = 0;
    for(i=1; i<=20; i++)
    {
        if(i%2== 0)
        {
            sum = sum + i;
            printf("%d-even\n", sum);
        }
        else{
            sum = sum + i;
            printf("%d-odd\n", sum);
        }
    }
    return 0;
}