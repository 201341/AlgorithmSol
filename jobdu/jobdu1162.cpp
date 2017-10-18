//#include <stdio.h>
//#include <vector>
//
//using namespace std;
//struct E{
//	int next;
//	int t;
//};
//
//vector <E> edge[610];
//
//bool mark[610];
//int time[610];
//int owner[610];
//
//int main() {
//	int n,m;
//	while(scanf("%d",&n)!=EOF && n!=0) {
//		scanf("%d",&m);
//		for(int i=1;i<=n;++i){
//			edge[i].clear();
//		}
//		int a,b,t;
//		for(int i=0;i<m;i++) {			//构建邻接链表；
//			scanf("%d%d%d",&a,&b,&t);	//两个城市之间所花费的时间；
//			E tmp;
//			tmp.next = b;
//			tmp.t = t;
//			edge[a].push_back(tmp);    //无向连接图
//			tmp.next = a;
//			edge[b].push_back(tmp);
//		}
//		for(int i=1;i<=n;++i) {
//			mark[i] = false;	//集合代表已经访问过的点
//			time[i] = -1;		//到其他城市所花费最少的时间
//			scanf("%d",&owner[i]);
//		}
//		
//		for(int i=1;i<=n;++i) {    //阵营二到阵营一不可以到达
//			if(owner[i] == 2) {
//				for(int j=0;j<edge[i].size();++j) {
//					if(owner[edge[i][j].next] == 1) {
//						edge[i][j].t = 0;
//					}
//				}
//			}
//		}
//
//		time[1] = 0;
//		mark[1] = true;
//		int newp = 1;
//		for(int i=1;i<n;++i) {
//			for(int j=0;j<edge[newp].size();++j) {
//				int next_ = edge[newp][j].next;
//				int time_ = edge[newp][j].t;
//				if(mark[next_] == true) continue;	//已经访问过的城市
//				if(time_ == 0) continue;	//不可到达的城市
//				if(time[next_] == -1 || time[next_] > time[newp] + time_){
//					time[next_] = time[newp] + time_;
//				}
//			}
//			int min = 1000;
//			for(int j=1;j<=n;j++) {
//				if(mark[j] == true) continue;
//				if(time[j] == -1) continue;
//				if(time[j] < min) {
//					min = time[j];
//					newp = j;
//				}
//			}
//			mark[newp] = true;
//		}
//		if(time[2] != -1) {
//			printf("%d\n",time[2]);
//		}else{
//			printf("-1\n");
//		}
//
//
//
//
//	}
//
//
//
//	return 0;
//}