#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{    
    clock_t t1, t2;
    t1 = clock();
    Sleep(1234);
    int n;
    scanf("%d",&n); 
    t2 = clock();
    printf("%lf\n", (t2-t1)/(double)(CLOCKS_PER_SEC));
}
