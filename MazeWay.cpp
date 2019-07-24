#include <stdio.h>
#include <queue>

/*

5 5
#S###
#...#
#.#.#
#....
###G#



*/


struct VERTEX {
  int a;
  int b;
};

int h, w, Sa, Sb, Ga, Gb, visited[101][101];
int dx[4] = {1,0,-1,0}, dy[4]={0,1,0,-1};
char M[101][101]; // 'G', '.', 'S', '#'

bool safe(int a, int b){
  return (0<=a && a<h) && (0<=b && b<w);
}

void input(){
  scanf("%d %d", &h, &w);  // 5 5
  for (int i=0; i<h; i++) {
    scanf("%s", M[i]); // "##S##",
    for (int j=0; j<w; j++){
      if (M[i][j]=='S') {
        Sa=i;
        Sb=j;
      }
      if (M[i][j]=='G') {
        Ga=i;
        Gb=j;
        M[i][j]='.';
      }
    }
  }
}

int solve(){
  std::queue<VERTEX> Q;
  Q.push((VERTEX){Sa,Sb});
  visited[Sa][Sb]=0;
  while(!Q.empty()) {
    VERTEX cur = Q.front();
    Q.pop();
    if ((cur.a==Ga) && (cur.b==Gb)) break;
    for (int i=0; i<4; i++) {
      int a = cur.a+dx[i];
      int b = cur.b+dy[i];
      if (safe(a,b)&&(!visited[a][b])&&(M[a][b]='.'))  {
        visited[a][b]=visited[cur.a][cur.b]+1;
        Q.push((VERTEX){a,b});
      }
    }
  }
  return visited[Ga][Gb];
}

void prnvit(){
  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      printf("%d ", visited[i][j]);
    }
    printf("\n");
  }
  printf("%d %d %d %d\n", Sa,Sb,Ga,Gb);
}

int main(){
  input();
  printf("%d\n", solve());
  prnvit();
  return 0;
}

