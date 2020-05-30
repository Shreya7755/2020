#include<stdio.h>
int main()
{
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
                scanf("%d",&arr[i]);
        int sum=0;
        for(int i=0;i<n;i++)
        {
                if(arr[i]==arr[i+1])
                {
                        for(int k=i+1;k<n;k++)
                        {
                                arr[k]=arr[k]+1;
                        }
                }
                sum=sum+arr[i];
        }
        printf("%d\n",sum);
        return 0;
}
