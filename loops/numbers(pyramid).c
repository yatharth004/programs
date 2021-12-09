#include<stdio.h>
int main()
{
        int row,col,n;
        printf("Enter the number till you wants to extent the row: \n");
        scanf("%d",&n);
        for(row=0;row<=n;row++)
{
        for(col=1;col<=(n-row);col++)
{       
        printf(" ");
}
        for(col=row;col<=2*(row-1)+1;col++)
{
        printf("%d",col);
}
        for(col=2*(row-1);col>=row;col--)
{
        printf("%d",col);
}
        printf("\n");
}
        return 0;
}
