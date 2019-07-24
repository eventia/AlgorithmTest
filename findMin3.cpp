#include <stdio.h>
int main(){
  int arr[5] = {5,7,9,2,4};
  int min;
  int i;

  min = arr[0]; // 5

  for (i=0; i<5; i++) {
    if (arr[i]<min){
        min = arr[i];
    }
  }
  printf("%d", min);
  return 0;
}
