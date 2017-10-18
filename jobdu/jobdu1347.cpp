//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//
//int Tree[1001];
//struct Edge{
//	int a,b;
//	int dist;
//	bool operator < (const Edge & A) const {
//		return dist<A.dist;
//	}
//}edge[10001];
//
//int findRoot(int x) {
//	if (Tree[x] == -1) return x;
//	else 
//		return findRoot(Tree[x]);
//}
//
//
//int main(){
//	int n,m;
//	while (scanf("%d%d",&n,&m) != EOF)
//	{
//		for(int i=0;i<m;++i) {
//			scanf("%d%d%d",&edge[i].a,&edge[i].b,&edge[i].dist);
//		}
//		sort(edge,edge+m);
//		int ans = 0,count=0;
//		for(int i=1;i<=n;++i) {
//			Tree[i] = -1;
//		}
//		for(int i=0;i<m;++i) {
//			int x = findRoot(edge[i].a);
//			int y = findRoot(edge[i].b);
//			if(x != y) {
//				Tree[x] = y;
//				ans += edge[i].dist;
//			}
//		}
//
//		for(int i=1;i<=n;++i) {
//			if(Tree[i] == -1) {
//				count++;
//			}
//		}
//		if(count != 1) {
//			printf("no\n");
//		}else{
//			printf("%d\n",ans);
//		}
//	}
//
//
//	return 0;
//}
