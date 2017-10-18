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
//		for(int i=0;i<m;i++) {			//�����ڽ�����
//			scanf("%d%d%d",&a,&b,&t);	//��������֮�������ѵ�ʱ�䣻
//			E tmp;
//			tmp.next = b;
//			tmp.t = t;
//			edge[a].push_back(tmp);    //��������ͼ
//			tmp.next = a;
//			edge[b].push_back(tmp);
//		}
//		for(int i=1;i<=n;++i) {
//			mark[i] = false;	//���ϴ����Ѿ����ʹ��ĵ�
//			time[i] = -1;		//�������������������ٵ�ʱ��
//			scanf("%d",&owner[i]);
//		}
//		
//		for(int i=1;i<=n;++i) {    //��Ӫ������Ӫһ�����Ե���
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
//				if(mark[next_] == true) continue;	//�Ѿ����ʹ��ĳ���
//				if(time_ == 0) continue;	//���ɵ���ĳ���
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