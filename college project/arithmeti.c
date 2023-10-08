// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a,b,su,sb,mu,di;
printf("enter a number");
scanf("%d",&a);
printf("enter another number");
scanf("%d",&b);
su = a+b;
sb = a-b;
mu = a*b;
di = a/b;
printf("%d+%d=%d\n",a,b,su);
printf("%d-%d=%d\n",a,b,sb);
printf("%d*%d=%d\n",a,b,mu);
printf("%d/%d=%d\n",a,b,di);
    return 0;
}