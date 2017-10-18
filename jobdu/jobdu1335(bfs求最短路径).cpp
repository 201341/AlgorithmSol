//#include <cstdio>
//#include <cstdlib>
//#include <string>
//#include <cstring>
//#include <algorithm>
//#include <queue>
//
//#define  MAX 102
//#define inf 100002
//
//using namespace std;
//
//int dir[][2] = {{0,1},{0,-1},{-1,0},{1,0}};
//int map[MAX][MAX];
//int cnt[MAX][MAX];
//
//int n;
//int ans;
//
//
//struct point {
//	int x;
//	int y;
//};
//
//queue<point> tmp;
//
//void bfs() {
//	point Source;
//	Source.x = 0,Source.y = 0;
//	cnt[0][0] = 0;
//	tmp.push(Source);
//	while(!tmp.empty()) {
//		point t= tmp.front();
//		tmp.pop();
//		for(int i=0;i<4;++i) {
//			int tx=t.x + dir[i][0];
//			int ty =t.y + dir[i][1];
//			if(tx >=0 && tx < n && ty >=0 && ty < n && map[tx][ty] == 1) {
//				int tcnt = cnt[t.x][t.y] + 1;
//				if(tcnt < cnt[tx][ty]) {
//					cnt[tx][ty] = tcnt;
//					point P;
//					P.x = tx;
//					P.y = ty;
//					tmp.push(P);
//				}
//			}
//		}
//
//
//	}
//
//
//}
//
//
//int main() {
//	while(scanf("%d",&n) != EOF) {
//		for(int i=0;i<n;++i) {
//			for(int j=0;j<n;++j) {
//				scanf("%d",&map[i][j]);
//				cnt[i][j] = inf;
//			}
//		}
//		if(map[0][0] == 1 || map[n-1][n-1] == 1) {
//			puts("-1");
//			continue;
//		}
//		bfs();
//		ans = cnt[n-1][n-1];
//		if(ans != inf) {
//			printf("%d\n",ans);
//		}else {
//			puts("-1");
//		}
//
//	}
//	return 0;
//
//
//}
