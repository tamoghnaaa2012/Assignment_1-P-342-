//Tamoghna Pattanayak,1811168
//sum over 1+1/2 + 1/3 + ... till the sum does not change by more than 0.001

//including library
#include <stdio.h>
#include <stdlib.h>


//including main function
int main()
{
    double next = 1;
    double i = 0;                           //initialization of counter.it will use to increase the denominator value
    double next_sum = 0;
	double max_no = 0;
	printf("Please enter value. = ");
	scanf("%lf", &max_no);

	//start while loop

	while (next > 0.001){
	    next = 1/(i+1);
	    printf("next=%lf \n", next);
	    next_sum = next_sum+next;
	    printf("next_sum=%lf \n", next_sum);    //will show one by one sum till your input
	    i = i+1;
	    if (i >= max_no){
            break;                     //if you are in limit then it it will sum up to which you give the input
                                       //other wise loop will not work and give the same result again and again.
	    }
	}
    if (next<=0.001){
        printf("The limit reached\n");
	}

       printf("The sum is = %lf ", next_sum);      //Final result


    return 0;
}
