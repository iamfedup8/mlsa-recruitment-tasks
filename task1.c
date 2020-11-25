#include<stdio.h>
#include<stdlib.h>
void check(int a, int b, int c);
int main(void)
{
    int x;
    int y;
    int z;
    printf("INPUT: ");
    scanf("%d %d %d", &x, &y, &z);
    check(x, y, z);
}
void check(int a, int b, int c)
{
    if (((b % a) + c) >= a)
    printf("OUTPUT: YES\n");
    else
    printf("OUTPUT: NO\n");
}
