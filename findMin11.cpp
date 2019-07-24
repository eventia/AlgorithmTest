#include <stdio.h>
int main(){

  int arr[100] = {0,};

  int n;    // n <- 불러올 숫자의 갯수 5
  // int 타입은 4개의 바이트를 사용합니다.
  // RAM 램.... 4G ... "0[0 또는 1] ~ 40억"
  int min;
  int i;

  scanf("%d", &n); // 10
                    // %d - 정수, %c - 문자, %f - 실수
                    // 5,7,9,2,4,5,8,9,10,8
  for(int i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }

  min = arr[0]; // 5

  for (i=0; i<n; i++) {
    if (arr[i]<min){
        min = arr[i];
    }
  }
  printf("%d", min);
  return 0;
}
