#include <stdio.h>

int main()
{
    int a,i,n,j;
       do
    {
      printf ("Height: ");
      scanf("%d",&a);
    }while (a<0||a>23);
    /*scanf ("%d",&a);
    printf ("Height: %d\n",a);*/
    for (i=1; i<=a; i++)
    {
       for (j=a-i; j>0; j--)
       {
        printf(" ");
       }
       n=i+1;
       while (n>0)
       {
           printf ("%s","#");
          // printf (" ");
          // printf ("%s","#");
           n--;
       }
       printf ("\n");

    }
    return 0;

}


