//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//
//int main() {
//	int a[20];
//	int hash[11];
//
//	while(cin>>a[0]){
//		for(int i=1;i<20;++i) {
//			cin>>a[i];
//		}
//		memset(hash,0,sizeof(hash));
//		for(int i=0;i<20;++i) {
//			hash[a[i]]++;
//		}
//		int max =0;
//		for(int i=1;i<11;++i) {
//			max = max<hash[i]?hash[i]:max;
//		}
//		for(int i=1;i<11;++i) {
//			if(max == hash[i]){
//				cout<<i<<endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}