#include<stdio.h>
int main()
{
        int row,col,n;
        printf("Enter the number till you wants to extent the row: \n");
        scanf("%d",&n);
        for(row=1;row<=n;row++)
{
        for(col=1;col<=row;col++)
{
        printf("*");
}
        printf("\n");
}
        return 0;
}
