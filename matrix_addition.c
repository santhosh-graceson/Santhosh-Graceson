#include <stdio.h>    
int main()   
{    
    int arr[3][3],i,j,arr1[3][3],k,l;     
    for (i=0;i<3;i++)    
    {    
         printf("\n");
        for (j=0;j<3;j++)    
        {    
            printf("Enter the values ",i,j);                
            scanf("%d",&arr[i][j]);    
        }    
    }    
    printf("The A matrix is \n");     
    for(i=0;i<3;i++)    
    {    
         printf("\n"); 
        for (j=0;j<3;j++)    
        {    
            printf("%d\t",arr[i][j]);    
        }    
    }  
    for (k=0;k<3;k++)    
    {   
         printf("\n");  
        for (l=0;l<3;l++)    
        {    
            printf("Enter the values ",k,l);                
            scanf("%d",&arr1[k][l]);    
        }    
    }    
    printf("The B matrix is \n");     
    for(k=0;k<3;k++)    
    {    
         printf("\n"); 
        for (l=0;l<3;l++)    
        {    
            printf("%d\t",arr1[k][l]);    
        }    
    }  
    int arr2[3][3],m,n;    
    arr2[m][n]=arr[i][j]+arr2[k][l];
        printf("The resultant matrix C is %d\n",arr2[m][n]); 
}   
