#include <stdio.h>
#include <string.h>

int main()
{
  char c1[26]= "abcdefghijklmnopqrstuvwxyz";
  char c2[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i,k,j,z,f=-1,b=0,n;
  scanf ("%d\n",&k);
    char s[100];
    char arr[100];
    fgets(s,100,stdin);
    printf ("plaintext: %s\n",s);
    n=strlen(s);

    for (j=0; j<n; j++)
    {
       for (i=0; i<26; i++)
       {
         if (s[j]==c1[i])
         {
           z=(i+k)%26;
           f++;
           arr[j]=c1[z];
             break;
          }
          else if (s[j]==c2[i])
          {
            z=(i+k)%26;
            f++;
            arr[j]=c2[z];
               break;
           }

        }
        if (f!=j)
        {
            f++;
            arr[j]=s[j];
        }
    }
    printf ("ciphertext: ");
    for(j=0; j<(f+1);j++)
    {
        printf("%c",arr[j]);
    }
    return 0;
}

