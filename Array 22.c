#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

void gotoxy(short x, short y)
{

    COORD pos = {x, y};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}

main()
{
    int length,max,min,i,j,k;

    printf("Input Number : ");

    scanf("%d",&length);

    int arr[length];
    //loop input จำนวน n
    for(i = 0; i<length; i++)
    {

        printf(i<9?"\nPerson0%d : ":"\nPerson%d : ",i+1);
        /*if (i<10)
            printf("Person0%d : ",i);
        else if(i>=10)
            printf("Person%d : ",i);*/

        scanf("%d",&arr[i]);
        // loop print "Point" กับ print"*" ตามจำนวน input
        for( k=-1; k<i; k++)
        {
            gotoxy(15,k+3);
            printf("Point\t");
        }

        for( j =0; j<arr[i]; j++)
        {
            printf("*");
        }

    }


    max = arr[0];

    //loop check min max
    for(i = 0; i<length; i++)
    {

        if(min > arr[i])
        {
            min = arr[i];

        }

        else if(max < arr[i])
        {
            max = arr[i];

        }


    }

    if(min<10){
        printf("\n\nMax Person = = > Person%d \nMin Person = = > Person0%d\n",max,min);
    }
    else if(max>=10){
        printf("\n\nMax Person = = > Person%d \nMin Person = = > Person0%d\n",max,min);
    }

    return 0;


}
