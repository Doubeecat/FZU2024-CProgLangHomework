#include <stdio.h>

int main() {
    int x;scanf("%d",&x);
    if (x % 5 == 0 || x % 5 == 4) 
			printf("Drying in day %d" ,x);
    else
        printf("Fishing in day %d", x);

}