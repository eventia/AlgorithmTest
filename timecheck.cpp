#include <stdio.h>
#include <ctime>

int main(){
    int s = clock();
    int tmp = 0;
    int n = 10000;
    // 반복문으로 총 1억번의 간단한 계산
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            // 1억번 연산
            tmp = tmp + 1;
        }
    }
    int e = clock();
    printf("%.3lf\n", (double)(e-s)/CLOCKS_PER_SEC);
    printf("%d", tmp+123456);

    return 0;
}
// C : 0.136 sec
