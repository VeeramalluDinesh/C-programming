#include <stdio.h>
int main() {
    int small,big,goal;
    printf("Enter the number of small values:\n");
    scanf("%d",&small);
    printf("Enter the number of big values:\n");
    scanf("%d",&big);
    printf("Enter the goal in kilos:\n");
    scanf("%d",&goal);
    int req=goal/5;
    if(req<=big)
    {
        int rem=goal-req*2;
        if(rem<=small)
        {
            printf("required number of small bars:%d",rem);
        }
        else{
            printf("-1");
        }
    }
    else
    {
        int rem=goal-big*2;
        if(rem<=small)
        {
            printf("requriednumber of small bars:%d",rem);
        }
        else{
            printf("-1");
        }
    }
    return 0;
}