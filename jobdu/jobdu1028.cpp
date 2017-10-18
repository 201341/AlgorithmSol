//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//int Tree[1000];
//struct Edge{
//	int a;
//	int b;
//	int lowCost;
//	int status;
//	bool operator < (const Edge &e) const{
//		return lowCost < e.lowCost;
//	}
//
//}edge[1000];
//
//int findRoot(int x) {
//	if(Tree[x] == -1) return x;
//	else
//		return findRoot(Tree[x]);
//}
//
//
//int main() {
//	int n,ans;
//	while(scanf("%d",&n) != EOF) {
//		ans = 0;
//		if(n == 0) break;
//		for(int i=1;i<=n;++i) {
//			Tree[i]=-1; 
//		}
//		for(int i=0;i<n*(n-1)/2; ++i) {
//			scanf("%d%d%d%d",&edge[i].a,&edge[i].b,&edge[i].lowCost,&edge[i].status);
//			if(edge[i].status == 1) {
//				edge[i].lowCost =0;
//			}
//		}
//		sort(edge,edge+n*(n-1)/2);
//		for(int i=0;i<n*(n-1)/2;++i) {
//			int aa = findRoot(edge[i].a);
//			int bb = findRoot(edge[i].b);
//			if( aa != bb) {
//				Tree[aa] = bb;
//				ans += edge[i].lowCost;
//			}
//
//		}
//
//		printf("%d\n",ans);
//	}
//	return 0;
//
//}