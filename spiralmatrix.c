#include<stdio.h>
int main()
{
int a[100][100],i=0,j=0,n,k;
    printf("Enter N ");
scanf("%d",&n);
int rmax,cmax;
rmax=cmax=n;
int len=n*n;
    //loop to access each outerlayer of the matrix towards center
/*if n=5
 # # # # (#)->cmax
 # ^ ^ ^ #
 # ^ $ ^ #  
 # ^ ^ ^ #
(#)# # # #
 |
 \/
 rmax
 #->1st square
 ^->2nd square
*/
for(k=1;k<=n*n;rmax--,cmax--)
{
 //loop to assign num column wise from first to last column
for(j=n-cmax;j<cmax;j++,k++)
{
    a[i][j]=k;
  
}

j--;
i++;
    
 //loop to assign num row wise from first to last row
for(i=n-rmax+1;i<rmax;i++,k++)
{
    a[i][j]=k;
    
}
j--;
i--;
    
 //loop to assign num column wise from last to first column
for(;j>=n-cmax;j--,k++)
{
    a[i][j]=k;
   
}
j++;
i--;
    
 //loop to assign num column wise from last to first row
for(;i>n-rmax;i--,k++)
{
    a[i][j]=k;
    
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
