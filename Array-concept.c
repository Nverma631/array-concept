//Important
#include<stdio.h>
int main()
{
    int a[5],i,x,pos1,pos2;
    for(i=1;i<=5;i++)
    {
        printf("\n Enter Number:");
        scanf("%d",&a[i]);
    }
    printf("\n Enter which to which position:");
    scanf("%d%d",&pos1,&pos2);
    if(pos1>0 && pos1<=5 && pos2>0 && pos2<=5)
    {
    for(i=1;i<=5;i++)
        if(i==pos1)
        {
            x=a[i];
            a[i]=a[pos2];
            a[pos2]=x;
        }
        for(i=1;i<=5;i++)
        printf("\n%d",a[i]);
    }
    else
        printf("\n Invalid position");
    return 0;
}
//program successful run
