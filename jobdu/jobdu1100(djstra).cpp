//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//
//struct E{
//	int next;
//	int dis;
//};
//
//vector <E> edge[101];
//bool mark[101];
//int dist[101];
//
//
//int main() {
//	int n,m;
//	while(scanf("%d%d",&n,&m) != EOF) {
//		for(int i=0;i<n;++i) edge[i].clear();
//		int a,b,cost=1;
//		for(int i=0;i<m;++i) {
//			scanf("%d%d",&a,&b);
//			E tmp;
//			tmp.next =b;
//			tmp.dis = cost;
//			edge[a].push_back(tmp);
//			tmp.next =a;
//			edge[b].push_back(tmp);
//			cost = cost*2%100000;
//		}
//		for(int i=0;i<n;++i) {
//			mark[i] = false;
//			dist[i] = -1;
//		}
//
//		mark[0] = true;
//		dist[0] = 0;
//		int newp = 0;
//		for(int i=0;i<n;++i) {
//			for(int j=0;j<edge[newp].size();++j){
//				int next_ = edge[newp][j].next;
//				int dist_ = edge[newp][j].dis;
//				if(mark[next_] == true) continue;
//					//大整数加法的局限性；
//				if(dist[next_] == -1 || dist[next_] > dist[newp] + dist_){
//					dist[next_] = dist[newp] + dist_;
//				}
//			}
//			int min = 123123123;
//			for(int j=0;j<n;j++) {
//				if(mark[j] == true) continue;
//				if(dist[j] == -1) continue;
//				if(dist[j] < min) {
//					min = dist[j];
//					newp = j;
//				}
//			}
//			mark[newp] = true;
//		}
//		for(int j=1;j<n;++j) {
//			if(dist[j] != -1) {
//				printf("%d\n",dist[j]%100000);
//			}else{
//				printf("-1\n");
//			}
//		}
//	}
//	return 0;
//}
