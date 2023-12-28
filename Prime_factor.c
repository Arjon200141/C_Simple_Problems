#include <stdio.h>
int main()
{
  int i, j, Number, Prime;

  printf("Enter any number : ");
  scanf("%d", &Number);

  for (i = 2; i <= Number; i++)
   {
    if(Number % i == 0)
      {
        Prime = 1;
        for (j = 2; j <= i/2; j++)
          {
            if(i % j == 0)
             {
              Prime = 0;
              break;
             }
          }
        if(Prime == 1)
         {
           printf("\n %d is a Prime Factor ", i);
         }
      }
   }

  	return 0;
}
