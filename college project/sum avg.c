// Online C compiler to run C program online
#include <stdio.h>

int main() {
int i,n,sum=0,no;
float avg;
printf("no of elements to be summed and averaged\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&no);
sum=sum+no;
}
avg=sum/n;
printf("sum=%d\n",sum);
printf("avg=%f\n",avg);

    return 0;
}