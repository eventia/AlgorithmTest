// 퀸의 자리배치
// Queue 이용한 퀸 자리배치
#include <stdio.h>
#include <queue>

bool visited[101];
int n, ans, col[10], inc[20], dec[20];

/*

void solve(int r){
  if(r>n)    {
    ans++;
    return;
  }
  for(int i=1; i<=n; i++) {
    if(!col[i] && !inc[r+i] && !dec[n+(r-i)+1]) {
      col[i]=inc[r+i]=dec[n+(r-i)+1]=1;
      solve(r+1);
      col[i]=inc[r+i]=dec[n+(r-i)+1]=0;
    }
  }
}


int main()
{
  scanf("%d", &n);
  solve(1);
  printf("%d", ans);
}
*/


