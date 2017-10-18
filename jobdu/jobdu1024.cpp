//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//int Tree[200];
//
//struct Edge{
//	int a,b;
//	int cost;
//	bool operator < (const Edge & e) const{
//		return cost<e.cost;
//	}
//}edge[200];
//
//
//int findRoot(int x) {
//	if(Tree[x] == -1) return x;
//	else
//		return findRoot(Tree[x]);
//}
//
//
//int main() {
//	int n,m;
//	while(scanf("%d%d",&n,&m) != EOF) {
//		if(n == 0) break;
//		for(int i=1;i<=n;++i) {
//			scanf("%d%d%d",&edge[i].a,&edge[i].b,&edge[i].cost);
//		}
//		sort(edge+1,edge+n+1);
//		for(int i=1;i<=m;++i) {
//			Tree[i] = -1;
//		}
//		int ans =0,count=0;
//		for(int i=1;i<=n;++i) {
//			int aa = findRoot(edge[i].a);
//			int bb = findRoot(edge[i].b);
//			if( aa != bb) {
//				Tree[aa] = bb;
//				ans += edge[i].cost;
//			}
//		}
//		for( int i=1;i<=m;++i) {
//			if(Tree[i] == -1) {
//				count++;
//			}
//		}
//		if(n < m-1 || count > 1) {
//			printf("?\n");
//		}else {
//			printf("%d\n",ans);
//		}
//
//		
//	}
//
//
//	return 0;
//}