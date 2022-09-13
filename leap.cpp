#include<stdio.h>
int main()
{
	int d,m,i,j=1;
	float y;
	while(j==1)
	{
		printf("enter  date/month/year: ");
		scanf("%d/%d/%f",&d,&m,&y);
		i=y;
		if(d>0 and m>0 and y>0 and i==y and d<32 and m<13)
		{
			if(i%4==0)
			{
				printf(" the given year is leap year");
			}
			else
			{
				printf(" the given year is not leap year");
			}
		}
		else
		{
			printf("invalid");
		}
		printf("\n do you want to continue:(1/0):");
		scanf("%d",&j);
		}
	}

