#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int main(void)
{
   int a, b;
   scanf("%d %d \n", &a, &b);
   char *string, *characters;
   string = malloc(a * sizeof(char));
   for (int i = 0; i < a; i++)
   {
      scanf("%c", &*(string + i));
   }
   characters = malloc((2 * b * sizeof(char)) - 1);
   for (int i = 0; i < ((2 * b)); i++)
   {
      scanf("%c", &*(characters + i));
   }
  // for (int i = 0; i < a; i++)
  // {
      /// printf("%c", *(string + i));
   //}
   //for (int i = 0; i < ((2 * b)); i++)
  // {
   //    printf("%c", *(characters + i));
  // }
    int position = -1;
    int substring_count =  (a * (a + 1)) / 2;
    for (int i = 0; i < a; i++)
    {
        int present = 0;
        for (int j = 0; j < ((2 * b)); j++)
        {
           // printf("%c\n", characters[j]);
           if (string[i] == characters[j])
           {
              present = 1;
           }
        }
        if (present == 0)
        {
            substring_count -= (i - (position)) * (a - i);
            position = i;
        }
       // printf("%d ",  present);
        //printf("%d\n", substring_count);
    }
    printf("%d", substring_count);
}


