// kruskal 求最小生成树；

//#include <iostream>
//#include <algorithm>
//#include <stdio.h>
//
//using namespace std;
//
//#define  N 101
//int Tree[N];
//
//struct Edge{
//	int a,b;
//	int cost;
//	bool operator < (const Edge &A) const {
//		return cost < A.cost;
//	}
//}edge[6000];
//
//int findRoot(int x) {
//	if(Tree[x] == -1) return x;
//	else
//		return findRoot(Tree[x]);
//}
//
//int main() {
//	int n;
//	while(cin>>n && n!=0){
//		for(int i=1;i<N;++i){
//			Tree[i] = -1;
//		}
//		for(int i=1;i<=(n-1)*n/2;++i) {
//			cin>>edge[i].a>>edge[i].b>>edge[i].cost;
//		}
//		sort(edge+1,edge+1+(n-1)*n/2);
//		int ans = 0;
//		for(int i=1;i<=(n-1)*n/2;++i) {
//			int a = findRoot(edge[i].a);
//			int b = findRoot(edge[i].b);
//			if(a!=b){
//				Tree[a] = b;
//				ans += edge[i].cost;
//			}
//
//		}
//		cout<<ans<<endl;
//
//	}
//	return 0;
//}