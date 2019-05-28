#include <stdio.h>
#include <string.h>
#include <ctype.h>
//file for vignere problem
int main()
{
	char c1[26]= "abcdefghijklmnopqrstuvwxyz";
	char c2[26]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int m,n;
    char c[100];
    char s[100];
    fgets(c,100,stdin);              //input of key
    fgets(s,100,stdin);
    printf ("plaintext: %s",s);
    m=(strlen(c)-1);
    n= (strlen(s)-1);
    printf ("m: %d n: %d\n",m,n);
    int j,d,k,p,f=0,i,z;
    
    for (j=0; j<n;j++)
    {//printf("%c",s[3]);
		p=(j-f);
		//int r= (isalpha(s[j])); 
		                                        //printf ("%d\n",isalpha(s[4]));
		if ((isalpha(s[j]))!=0)
		{
			for (d=0;d<26;d++)
			{    k=0;
				if ((c[p%m]==c1[d])||(c[p%m]==c2[d]))
				{   k=d;
					//printf("%d",k);
					break;   }
					//printf (" ");
			}
			
			for (i=0;i<26;i++)
			{    
				if (s[j]==c1[i])
				{z=((k+i)%26);
					//printf("%d",z);
					printf("%c",c1[z]);
					break;
				}
				else if(s[j]==c2[i])
				{z=((k+i)%26);
					//printf("%d",z);
					printf("%c",c2[z]);
					break;
				 }
		      }    
		}   
		else 
		{ printf("%c",s[j]);
		  f++;
		}
	  }
	  
  
  return 0;
}
