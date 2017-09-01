#include<stdio.h>
int main()
{
int a[100][100],i=0,j=0,n,k;
scanf("%d",&n);
int rmax,cmax;
rmax=cmax=n;
int len=n*n;
for(k=1;k<=n*n;rmax--,cmax--)
{
for(j=n-cmax;j<cmax;j++,k++)
{
    a[i][j]=k;
  //  printf("(%d,%d)=%d,",i,j,k);
}

j--;
i++;
for(i=n-rmax+1;i<rmax;i++,k++)
{
    a[i][j]=k;
    //printf("(%d,%d)=%d,",i,j,k);
}
j--;
i--;
for(;j>=n-cmax;j--,k++)
{
    a[i][j]=k;
    //printf("(%d,%d)=%d,",i,j,k);
}
j++;
i--;
for(;i>n-rmax;i--,k++)
{
    a[i][j]=k;
    //printf("(%d,%d)=%d,",i,j,k);
}
i++;

}
printf("\n");
for(i=0;i<n;i++)
{for(j=0;j<n;j++)
printf("%d ",a[i][j]);
printf("\n");
}
}
