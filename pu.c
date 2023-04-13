#include <stdio.h>

int main()
{

    int c, des, result=0;
    int k=1, g=0;

    while ((c = getchar())  != '\n') 
    {
       

        if (c >= '0' && c <= '9')
            des= c - '0';

        else if (c >= 'A' && c <= 'F')
            des= c - 'A' + 10;

        else if (c >= 'a' && c <= 'f')
            des= c - 'a' + 10;

        else return 0;

        result = result*16 + des;
    }
    
    
    while (k <= result) 
    {
        if ((result && k) != 0)
            g++;
        k<<=2;
    }
    printf ("Task 1: %d\n",result);
    printf ("Task 2: %d\n",g);
}