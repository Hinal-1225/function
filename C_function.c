#include<stdlib.h>
#include<stdio.h>
void fun_sum(int n);
int main()
{
    system("cls");
    int i,n;
    printf("\nEnter number : ");
    scanf("%d",&n);
    fun_sum(n);
    system("pause");
	return 10;
}
void fun_sum(int n)
{
    int i=1,sum=0;
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
        sum=sum+i;
    }
    printf("\nThe sum of 1 to %d is : %d ",n,sum);
}
