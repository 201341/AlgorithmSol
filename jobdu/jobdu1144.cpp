//#include <stdio.h>
//#include <math.h>
//#include <algorithm>
//
//using namespace std;
//#define N 101
//int Tree[N];
//struct Edge{
//	int a,b;
//	double cost;
//	bool operator < (const Edge & A) const{
//		return cost<A.cost;
//	}
//
//}edge[6000];
//
//struct point {
//	double x,y;
//	double getDistance(point A){
//		double tmp = (x-A.x)*(x-A.x) + (y-A.y)*(y-A.y);
//		return sqrt(tmp);
//	}
//}list[101];
//
//int findRoot(int x) {
//	if(Tree[x] == -1) return x;
//	else {
//		return findRoot(Tree[x]);
//	}
//}
//
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		for(int i=1;i<=n;++i) {
//			scanf("%lf%lf",&list[i].x,&list[i].y);
//		}
//		int size = 0;
//		double ans = 0;
//		for(int i=1;i<=n;++i) {
//			for(int j=i+1;j<=n;++j) {
//				edge[size].a = i;
//				edge[size].b = j;
//				edge[size].cost = list[i].getDistance(list[j]);
//				size++;
//			}
//		}
//		sort(edge,edge+size);
//		for(int i=1;i<=n;++i) {
//			Tree[i] = -1;
//		}
//		for(int i=0;i<size;++i){
//			int x = findRoot(edge[i].a);
//			int y = findRoot(edge[i].b);
//			if(x != y) {
//				Tree[x] = y;
//				ans += edge[i].cost;
//			}
//
//		}
//		printf("%.2f\n",ans);
//
//	}
//	return 0;
//}