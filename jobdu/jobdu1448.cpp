//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//vector<int>edge[501];//�����ڽ�����
//queue<int> Q;	//����Ϊ0�Ķ���
//
//
//
//int main(){
//	int inDegree[501];  //�����Ŀ��
//	int n,m;
//	while(cin>>n>>m && n!=0 && m!=0) {
//		for(int i=0;i<n;++i){
//			inDegree[i] = 0;
//			edge[i].clear();
//		}
//		while(m-- != 0){
//			int a,b;
//			cin>>a>>b;
//			inDegree[b]++;
//			edge[a].push_back(b);
//		}
//		while(Q.empty() == false) Q.pop();
//		for(int i=0;i<n;++i) {
//			if(inDegree[i] == 0){
//				Q.push(i);
//			}
//		}
//		int cnt = 0;
//		while(Q.empty() == false) {
//			int nowP = Q.front();
//			Q.pop();
//			cnt++;
//			for(int i=0;i<edge[nowP].size();++i){
//				inDegree[edge[nowP][i]]--;
//				if(inDegree[edge[nowP][i]] == 0){
//					Q.push(edge[nowP][i]);
//				}
//			}
//		}
//
//		if(cnt == n) cout<<"YES"<<endl;
//		else
//			cout<<"NO"<<endl;
//	}
//
//
//	return 0;
//}