#include<stdio.h>
int main()
{
    int p,t,r, interest;
    //printf("enter the p,t,r values");
    scanf("%d%d%d",&p,&t,&r);
    interest=(p*t*r)/100;
    printf("%d",interest);
    return 0;
}