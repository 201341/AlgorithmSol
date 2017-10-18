//#include <iostream>
//#include <vector>
//#include <string.h>
//
//
//using namespace std;
//
//struct E{
//	int next;
//	int c; //长度
//	int cost;
//};
//
//vector<E> edge[1001];//邻接链表；
//int Dist[1001]; //距离数组
//int Cost[1001]; //花费数组；
//bool mark[1001]; //是否属于集合K数组；
//
//
//
//int main(){
//	int n,m;
//	int S,T;
//	while(cin>>n>>m && m!=0 && n!=0) {
//		for(int i=1;i<=n;++i) {
//			edge[i].clear();
//		}
//		int a,b,c,cost;
//		while(m-- != 0){
//			cin>>a>>b>>c>>cost;
//			E tmp;
//			tmp.c=c;
//			tmp.cost = cost;
//			tmp.next = b;
//			edge[a].push_back(tmp);
//			tmp.next = a;
//			edge[b].push_back(tmp);
//
//		}
//		cin>>S>>T;
//		for(int i=1;i<=n;++i){
//			Dist[i] = -1;
//			mark[i] = false;
//		}
//		Dist[S] = 0;
//		mark[S] = true;
//		int newP = S;
//		for(int i=1;i<n;++i) {
//			for(int j=0;j<edge[newP].size();++j){
//				int t = edge[newP][j].next;
//				int c = edge[newP][j].c;
//				int cos = edge[newP][j].cost;
//				if(mark[t] == true) continue;
//				if(Dist[t] == -1 || Dist[t]>Dist[newP]+c || Dist[t] == Dist[newP]+c && Cost[t] > Cost[newP]+cos){
//
//					Dist[t] = Dist[newP]+c;
//					Cost[t] = Cost[newP]+cos; 
//				}
//
//			}
//
//			int min = 123123123;
//			for(int j=1;j<=n;++j){
//				if(mark[j] == true){
//					continue;
//				}
//				if(Dist[j] == -1) continue;
//				if(Dist[j]<min) {
//					min = Dist[j];
//					newP = j;
//				}
//			}
//			mark[newP] = true;
//		}
//		cout<<Dist[T]<<" "<<Cost[T]<<endl;
//	}
//	return 0;
//}