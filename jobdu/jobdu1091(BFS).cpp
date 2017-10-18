//#include <stdio.h>
//#include <string.h>
//#include <queue>
//
//using namespace std;
//
//int map[6][6];
//int stx,sty,endx,endy;
//int dir[][2] = {{1,0},{-1,0},{0,1},{0,-1}};
//int opt[6][6][4];
//int cnt[6][6];
//int ans;
//
//struct point{
//	int x;
//	int y;
//	int sum;
//	int status;
//};
//
//queue <point> Q;
//
//void BFS() {
//	while(Q.empty() == false) {
//		point tmp = Q.front();
//		Q.pop();
//		for(int i=0;i<4;++i) {
//			int nx = tmp.x + dir[i][0];
//			int ny = tmp.y + dir[i][1];
//			if(nx >=0 && nx<6 && ny >= 0 && ny <6 ) {
//				int cost = tmp.status * map[nx][ny];
//				if(tmp.sum + cost <opt[nx][ny][cost%4] && tmp.sum + cost < opt[endx][endy][cost%4]) {
//					opt[nx][ny][cost%4] = tmp.sum + cost;
//					point t;
//					t.x = nx;
//					t.y = ny;
//					t.sum = tmp.sum + cost;
//					t.status = cost%4 + 1;
//					Q.push(t);
//
//				}
//				
//			}
//		}
//	}
//}
//
//
//int main() {
////	freopen("E:\\in.txt","r",stdin);
//	int k;
//	scanf("%d",&k);
//	while(k--) {
//		for(int i=0;i<6;++i) {
//			for(int j=0;j<6;++j) {
//				scanf("%d",&map[i][j]);
//				for(int k = 0; k < 4 ; k ++)
//					opt[i][j][k] = 100000;
//			}
//		}
//		scanf("%d%d%d%d",&stx,&sty,&endx,&endy);
//		point source;
//		source.x = stx;
//		source.y = sty;
//		source.status = 1;
//		source.sum = 0;
//		Q.push(source);
//		BFS();
//		ans = 0x7fffffff;
//		for(int i=0;i<4;++i) {
//			if(ans > opt[endx][endy][i]) {
//				ans = opt[endx][endy][i];
//			}
//		}
//		printf("%d\n",ans);
//	}
//	return 0;
//}