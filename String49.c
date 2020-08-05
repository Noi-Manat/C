#include <stdio.h>
#include <string.h>

int main()
{
    char string1[20];
    char string2[20];
    int count;
    printf("Input String[n1] : ");
    gets(string1);
    printf("Input String[n2] : ");
    gets(string2);
    
    
    for(int i = 0; i < strlen(string1); i++) {
        count = 1;
        for(int j = i; j < strlen(string2); j++) {
                //printf("%c %c [i]=%d[j]=%d\n",string1[i],string2[j],i,j);
            if(string1[i] == string2[j] && string1[i] != ' ') {
                count++;


                
                string2[j] = '0';
            }
        }
        
        if(count > 1 && string1[i] != '0')
            printf("%c = %d\n", string1[i],count/2);
    }

    return 0;
}
