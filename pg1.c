//travel time estimator
#include<stdio.h>
int main()
{   //we use 0.0f to instruct the compiler that the value should be a float and should start from 0
    char destination[50]="";
    float time=0.0f;
    float distance=0.0f;
    float speed=0.0f;
    printf("where are you driving to?: ");
    scanf("%49[^\n]",destination);
    printf("how many kms is the trip?: ");
    scanf("%f",&distance);
    printf("what is the avg speed in km/h:");
    scanf("%f",&speed);
    time=distance/speed;
    printf("_________________Trip Summary__________________\n");
    printf("THE DESTINATION:%s\n",destination);
    printf("The Time Taken: %.2f",time);
return 0;
}
