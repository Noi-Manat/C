#include <stdio.h>
#include <stdlib.h>
int digitSum(int a ,int *b)
{
    int c;
    while(a!=0){
        c=a%10;
        *b +=c;
        a/=10;
    }
    return b;

}
int main()
{
    int num;
    int sum = 0 ;
    scanf("%d",&num);
    digitSum(num,&sum);
    printf("%d",sum);

}
