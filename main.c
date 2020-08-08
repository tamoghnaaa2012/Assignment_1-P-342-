//Tamoghna Pattanatak.Roll no:-1811168
//Question-2.(factorial n! say for n=10 or 15, check and trap negative integers, say for -5!)


//including library
#include <stdio.h>
#include <stdlib.h>

//declaring the main function
int main()
{
    double num,count,fact =1;         //declaring the variables
                                      //instead of int,I am using double.Because int has some specific boundry
                                      //in int type we can't get the factorial of higher value
    printf("Enter a number to find its Factorial:\n");
    scanf("%lf" ,&num);
    if(num<0)
        printf("Error!Factorial of a negative number doesn't exist");
    else
    {
     for(count=1;count<=num; count++)
    {
        fact = fact *count;
    }
    }


    printf("Factorial of %lf id %lf\n",num,fact);

    return 0;
}
