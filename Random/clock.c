#include <stdio.h>
#include <stdlib.h>


int main()

{
    int h,m,s;
    int d=1000; //delay of 1000 miliseconds we gonna use in the function Sleep
    printf("Set time: \n");
    scanf("%d%d%d",&h,&m,&s);
    if (h>12 || m>60 || s>60)
    {
        printf("Error! \n");
        exit(0);
        }
    while(1) //an infinite loop for the clock
    {
        s+=1;
        if (s>59);
        {
            m++;
            s=0;
            }
        if (m>59)
         {
            h++;
            m=0;
            }
        if (h>12)
         {
            h=1;
            }

        printf("\n Clock: ");
        printf("\n %02d:%02d:%02d",h,m,s);

        system("sleep 1");
        system("clear");

        }


    }
