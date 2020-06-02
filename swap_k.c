#include<stdio.h>
int main()
{
        int t;
        scanf("%d",&t);
        int n;
        scanf("%d",&n);
        int k;
        scanf("%d",&k);
        int arr[n];
        for(int i=0;i<n;i++)
                scanf("%d",&arr[i]);
        int a;
        int b;
        int temp;
        a=k-1;
        b=n-k;
        temp=arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
        for(int i=0;i<n;i++)
        {
                printf("%d\t",arr[i]);
        }
        printf("\n");
        return 0;
}
