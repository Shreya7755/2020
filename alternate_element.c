
#include<stdio.h>
int main()
{
        int t;
        scanf("%d",&t);
        while(t!=0)
        {
                int n;
                scanf("%d",&n);
                int arr[n];
                for(int i=0;i<n;i++)
                        scanf("%ds",&arr[i]);
                for(int i=0;i<n;i=i+2)
                        printf("%d\t",arr[i]);
                t--;
        }
        printf("\n");
        return 0;
}
