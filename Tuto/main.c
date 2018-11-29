#include <stdio.h>
#include <stdlib.h>

//int multiple(int b);

int main()
{
    int a =4;
    multiple2(&a);
    printf("%d",a);
    return 0;
}

/*int multiple(int b)
{
    b=b*4;
    return b;
}*/

void multiple2(int *b)
{
    *b = 4 * (*b);
}
