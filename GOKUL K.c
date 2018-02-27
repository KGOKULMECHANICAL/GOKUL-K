#include<stdio.h>
#include<math.h>
void main()
{
int a[100],n,i,g;
printf("enter the array size");
scanf("%d",n);
printf("element of the array",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
g=a[0];
for(i=1;i<n;i++)
{
if(g>a[i])
g=a[i];
}
printf("minimum element %d",g);
}

