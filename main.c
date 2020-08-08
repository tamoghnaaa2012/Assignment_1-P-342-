//Tamoghna Pattanatak.Roll no:-1811168
//Question-1.(add 1+2+3+ ... 100 WITHOUT using the formula n(n+1)/2)


//Including  library
#include <stdio.h>
#include <stdlib.h>


//Declaring the main function
int main()
{
    int num,count = 1, sum =0;     //declaring the variables

    printf("Enter a positive number \n");
    scanf("%d",&num);
    printf("Sum of natural numbers from 1 to %d is:\n",num);
    while(count<= num)
    {
        sum = sum +count;
        printf(" %d ",count);
        count++;

        if (count>num)
        {
           printf(" = %d\n",sum);
        }
        else
        {
         printf(" + ");
        }



    }

    return 0;
}
