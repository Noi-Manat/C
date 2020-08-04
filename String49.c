#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[20],str2[20];
    int count=0;
    printf("Input Sring[n1] : ");
    gets(str1);
    printf("Input Sring[n2] : ");
    gets(str2);
    for(int i= 0; i<str1[i]; i++)
    {
        count = 1;
        for(int j= i+1; j<str2[j]; j++)
        {
           //printf("[%d][i]%c\n",i,str1[i]);
            //printf("[%d][j] %c\n",j,str2[j]);
            if(str1[i]==str2[j]){
                count++;
                str2[j]=0;


            }

        }
 if(count > 1 && str1[i] != '0')
           printf("%c = %d\n",str1[i],count);

    }



}
