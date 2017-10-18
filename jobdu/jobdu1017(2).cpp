/*
*prim 算法求最小生成树
*
*/

//#include <iostream>
//#include <stdio.h>
//#include <string.h>
//
//using namespace std;
//
//#define MAX 100
//#define MAXEDGE 60000
//
//int graph[MAX][MAX];
//
//struct CloseEdge{
//	int adjvex;
//	int lowcost;
//
//};
//
//int mincloseEdge(CloseEdge *edge,int n){
//	int min = MAXEDGE;
//	int k = -1;
//	for(int j=1;j<=n;++j){
//		if(edge[j].lowcost !=0 && edge[j].lowcost<min){
//			min = edge[j].lowcost;
//			k = j;
//		}
//
//	}
//	return k;
//}
//
//
//int main() {
//	int n;
//	while(cin>>n && n!=0 ){
//		memset(graph,0,sizeof(graph));
//		int a,b,c,ans=0;
//		CloseEdge closeEdge[MAXEDGE]; 
//		for(int i=1;i<=(n-1)*n/2;++i) {
//			cin>>a>>b>>c;
//			graph[a][b]=c;
//			graph[b][a]=c;
//		}
//		for(int i=1;i<=n;++i){
//			closeEdge[i].adjvex = 1;
//			closeEdge[i].lowcost = graph[1][i];
//		}
//		closeEdge[1].lowcost = 0;
//		for(int i=2;i<=n;++i) {
//			int k = mincloseEdge(closeEdge,n);
//			ans+=closeEdge[k].lowcost;
//			closeEdge[k].lowcost = 0;
//			for(int j=1;j<=n;++j) {
//				if(graph[k][j]<closeEdge[j].lowcost){
//					closeEdge[j].lowcost = graph[k][j];
//					closeEdge[j].adjvex = k;
//				}
//			}
//		}
//		cout<<ans<<endl;
//
//	}
//
//	return 0;
//}