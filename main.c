#include <stdio.h>
//Write a programme that allow to Insert a value into a sorted array
int main()
{
    int a[5];
    int n,num,i;

    printf("Choose dimension: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter value%d: \n",i);
        scanf("%d",&a[i]);
    }

    printf("Before adding table: ");

    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    printf("\n");


    printf("Which number you want to insert? \n");
    scanf("%d",&num);

    for(i=n; (i>0)&&(a[i-1]>num);i-- )
    {
        a[i]=a[i-1];
    }
    a[i]=num;
    n++;
    printf("Table Result: \n");

    for(i=0;i<n;i++)
    {
        printf("%d \n",a[i]);
    }
    return 0;
}
