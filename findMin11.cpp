#include <stdio.h>
int main(){

  int arr[100] = {0,};

  int n;    // n <- �ҷ��� ������ ���� 5
  // int Ÿ���� 4���� ����Ʈ�� ����մϴ�.
  // RAM ��.... 4G ... "0[0 �Ǵ� 1] ~ 40��"
  int min;
  int i;

  scanf("%d", &n); // 10
                    // %d - ����, %c - ����, %f - �Ǽ�
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
