//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <cmath>
//
//using namespace std;
//int cmp(int a,int b){
//	return a>b;
//}
//
//int main() {
//	int n,m;
//	int a[100000];
//	while(cin>>n>>m && n!=0 &&m!=0) {
//		memset(a,0,sizeof(a));
//		for(int i=0;i<n;++i) {
//			cin>>a[i];
//		}
//		sort(a,a+n,cmp);
//		int k = min(m,n);
//		for(int i=0;i<k-1;i++){
//			cout<<a[i]<<" ";
//		}
//		cout<<a[k-1]<<endl;
//
//	}
//	return 0;
//}