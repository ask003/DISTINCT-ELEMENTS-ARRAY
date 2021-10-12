
#include <stdio.h>
#include<stdlib.h>
int main()
{
     int n,flag=0;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d",&n);
    int a[n];
    printf("ENTER THE ARRAY: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                printf("THE ARRAY IS NOT DISTINCT");
                flag =1;
                exit(0);
            }
        }
    }
    if(flag==0)
    {
         printf("THE ARRAY IS DISTINCT");
    }
    return 0;
}