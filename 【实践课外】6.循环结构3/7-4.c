#include <stdio.h>
int i,ans,flag;
char c[10010];
 
int main()
{
    while(1)
    {
        i++;
        scanf("%c",&c[i]);
        if(c[i]=='.') break;
    }
    int Len_c = i;
 
    for(i=1;i<=Len_c;i++){
        if(c[i]!='.') flag=1;
    }
    if(flag==0) return 0;
    i=1;
    while(c[i]==' '){
        c[i]='#';
        i++;
    }
    i=Len_c-1;
    while(c[i]==' '){
        c[i]='#';
        i--;
    }
 
    for(i=1;i<=Len_c;i++){
 
        if(c[i]=='#'){
            continue;
        }
        if(c[i]=='.'){
            printf("%d",ans);
            break;
        }
        if(c[i]==' '){
            if(c[i-1]==' ') continue;
            else{
                printf("%d ",ans);
                ans=0;
            }
        }
        else{
            ans++;
        }
    }
}