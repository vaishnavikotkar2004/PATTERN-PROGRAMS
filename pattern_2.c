#include<stdio.h>
int main()
{
 char i,j;
 for(i='A';i<='D';i++)
 {
  for(j='A';j<=i;j++)
   {
       printf("%c",j);
   }
   printf("\n");
 }
}
 
output:- A
         A B
         A B C
         A B C D 
