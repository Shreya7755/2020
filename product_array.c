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
                        scanf("%d",&arr[i]);
                int product=1;
                for(int i=0;i<n;i++)
                {
                        product=product*arr[i];
                }
                printf("%d\n",product);
                t--;
        }
        return 0;
}


