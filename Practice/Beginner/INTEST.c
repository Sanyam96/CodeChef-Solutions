
    #include<stdio.h>
    int main()
    {
        int a,b,c;
        int n;
        scanf("%d%d",&n,&b);
        int arr[n];
        c=0;
        {
            for(a=0; a < n;a++)
            {
                scanf("%d",&arr[a]);
                if(arr[a]%b==0)
                {
                    c+=1;
                }
            }
           printf("%d",c);
        }
        return 0;
    }
