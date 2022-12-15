#include<stdio.h>
int main()
{
int i,j;
int matrix_index[4][5]= {{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4}};

for (i=0;i<4;i++)
{   
    for(j=0;j<5;j++)
    {
     printf("The value of matrix_index[%i][%i] is :",i,j);
     printf("%d\n",matrix_index[i][j]);

    }
}
}
