#include <stdio.h>
int main(void)
{
    int i = 48;
    int *ptr = &i;
    int *ptr2 = (int *)0x7ffc5076976c;
    printf("%p\n", ptr2);
}