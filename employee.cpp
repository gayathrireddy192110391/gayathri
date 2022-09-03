#include<stdio.h>
int main()
{
    int a,num, num1,num2,num3,b,c,d,e,f;
    {
        printf("enter the salary= ");
        scanf("%d",&a);
        printf("1 for grade a\n");
        printf("2 for grade b\n");
        printf("enter the grade=");
        scanf("%d",&b);
        if (b==1)
        {
            if (a>=10000){
            num=a*10/100;
            c=a+num;
            printf("the bonus amount of the employee is=%d\n",num);
            printf("the total amount of the employee is=%d\n",c);}
            else if (b<=10000){
            num1=a*12/100;
            d=num1+a;
            printf("the bonus amount of the employee is=%d\n",num1);
            printf("the total amount of the employee is=%d\n",d);}
        }
        else if (b==2)
        {
            if (a>=10000){
            num2=a*20/100;
            e==num2+a;
            printf("the bonus amount of the employee is %d\n",num2);
            printf("the total amount of the employee is=%d",e);}
            else if (b<=10000){
            num3=a*22/100;
            f=num3+a;
            printf("the bonus amount of the employee is=%d\n",num3);
            printf("the total amount of the employee is=%d",f);}
        }
    }
}
