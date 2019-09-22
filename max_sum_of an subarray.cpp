#include <stdio.h>
int maxSum(int a[],int n );
int beg,end;
int main()
{
    int a[100],n;
    int y,i;
    printf("enter size of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    y=maxSum(a,n);
    printf("%d \n",y);
    for(i=beg;i<end;i++)
    printf("%d ",a[i]);

}
int maxSum(int a[], int n)
{
   int maxSum = 0,sum = 0;
   int i;
   for(i = 0;i<n;i++)
   {
     sum = sum + a[i];
     if(sum < 0)
     {
        sum = 0;
        beg=i+1;
     }
     else if(sum > maxSum)
     {
        maxSum = sum;
        end=i+1;
     }
   }
   return maxSum;
}

