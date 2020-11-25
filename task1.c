#include<stdio.h>
#include<stdlib.h>
void check(int a, int b, int c);
int main(void)
{
    int x;
    int y;
    int z;
    scanf("%d %d %d", &x, &y, &z);
   check(x, y, z);
}
void check(int a, int b, int c)
{
    if (((b % a) + c) >= a)
    printf("YES\n");
    else
    printf("NO\n");
}
