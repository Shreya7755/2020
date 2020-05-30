#include<stdio.h>
int main()
{
        int T;
        scanf("%d",&T);
        while(T!=0)
        {
                int N , D;
                scanf("%d",&N);
                int arr[N];
                scanf("%d",&D);
                int var[D];
                for(int i=0 ; i<N ; i++)
                {
                        scanf("%d",&arr[i]);
                }
                for(int i=0 ; i<D ;i++)
                {
                        var[i] = arr[i];
//                      printf("%d",var[i]);
                }
                for(int i=0 ; i<=D ; i++)
                {
                        arr[i] = arr[i+2];
                        printf("%d\t",arr[i]);
                }
                for(int i=0 ; i<D ; i++)
                        printf("%d\t",var[i]);
                printf("\n");
                T--;
        }
        return 0;
}
