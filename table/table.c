#include<stdio.h>
int main()
{
        int whereToStart,uptoWhatExtent,incrementedVariable,lengthOfTable,product;
        printf("Enter the number from where you start your multiplication table: \n");
        scanf("%d",&whereToStart);
        printf("Upto what extent you want to go: \n");
        scanf("%d",&uptoWhatExtent);
        printf("What should be the length of the multiplication table: \n");
        scanf("%d",&lengthOfTable);
        for(int i=1; i<=lengthOfTable;i++)
{
        for(int j=whereToStart;j<=uptoWhatExtent;j++)
{
                product=i*j;
                printf("%d X %d = %d ",j,i,product);
}
        printf("\n");
}
        return 0;
}
