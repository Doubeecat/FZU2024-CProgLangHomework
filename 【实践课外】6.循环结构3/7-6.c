#include<math.h>
#include<string.h>
#include <stdio.h>
int main(){
 
    int n;
    scanf("%d",&n);
    int p = 0;
    int floor=0;
    int q = 1;
    int u = 1;
    for(int i=1;;i++){
 
        int k=i*(i+1);
 
        int p=(i-1)*i;
 
        if(2*n==k){
 
            floor=i;
 
            break;
 
        }else if(2*n<k&&2*n>p){
 
            floor=i-1;
 
            break;
 
        }
 
    }
 
   
 
   
 
    for(int i=floor;i>0;i--){
 
        for (int j = 1; j <= (2 * floor - 1);j++)
 
        {   if(j==i+p&&q<=u){
 
                    printf("%d",i);
 
                    p+=2;
 
                    q++;
 
                }
 
                else
 
                {
 
                    putchar('0');
 
                }
 
               
 
        }
 
        q = 1;
 
        p = 0;
 
        u++;
        puts("");
    }
    return 0;
}
 