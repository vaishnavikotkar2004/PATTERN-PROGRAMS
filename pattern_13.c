#include<stdio.h>
int main()
{
 int i,j;
 for(i=4;i>=1;i--)
 {
   for(j=i;j<=4;j++)
   {
    printf("%d\t",j);
   }
   printf("\n");
 }
}

output:-  4
          3 4
          2 3 4
          1 2 3 4
