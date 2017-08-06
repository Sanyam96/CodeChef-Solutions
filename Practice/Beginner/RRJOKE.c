#include<stdio.h>
int main(){
    int t,ans,n,i,x,y;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ans=0;
        for(i=1;i<=n;i++){
            scanf("%d %d",&x,&y);
            ans=ans^i;
        }
        printf("%d\n",ans);
    }
    return 0;
} 