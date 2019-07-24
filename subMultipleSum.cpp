// 약수의 합을 구하는 프로그램
// 부분배제법을 사용 - sqrt(n) 까지 구하기
//

#include <stdio.h>
#include <math.h>

long long n;
long long ans;

int main(){
  scanf("%ld", &n);
  long m = sqrt(n);

  /*
  for (int i=1; i<=n; i++){
    if (n%i==0) {
      ans = ans+i;
    }
  }
  */

  for (long i=1; i<=m; i++){
    if (n%i==0) {
      ans = ans+i+n/i;
    }
    if (n%m==0) ans = ans - m;
  }

  printf("%lld", ans);

  return 0;
}
