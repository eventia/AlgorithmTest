#include <stdio.h>
#include <ctime>


int main(){

    int s = clock();
    int tmp=0;
    int n = 10000;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++){
            tmp = tmp+1;
        }
    }
    int e = clock();

    printf("%.3lf\n", (double)(e-s)/CLOCKS_PER_SEC);
    printf("%d", tmp+123456);
    return 0;
}
