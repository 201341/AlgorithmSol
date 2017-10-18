//#include <iostream>
//
//using namespace std;
//
//#define N 10000001
//int Tree[N];
//int sum[N];
//
//
//int findRoot(int x){
//	if(Tree[x] == -1) return x;
//	else
//		return findRoot(Tree[x]);
//}
//
//int main() {
//	int n;
//	while(cin>>n){
//		for(int i=1;i<N;++i){
//			Tree[i] = -1;
//			sum[i] = 1;
//		}
//
//		while(n-- != 0) {
//			int a,b;
//			cin>>a>>b;
//			a = findRoot(a);
//		    b = findRoot(b);
//			if(a != b) {
//				Tree[a] = b;
//				sum[b] += sum[a];
//			}
//		}
//		int ans = 1;
//		for(int i=1;i<N;++i){
//			if(Tree[i] == -1 && sum[i] > ans) {
//				ans = sum[i];
//			}
//		}
//		cout<<ans<<endl;
//
//	}
//	return 0;
//}