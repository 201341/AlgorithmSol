//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//
//struct Num{
//	int no;
//	int index;
//	bool operator < (const Num &E) const{
//		return no < E.no;
//	}
//
//}pNum[10000];
//
//int main() {
//	int n;
//	int a[10001];
//	while(scanf("%d",&n) != EOF) {
//		for(int i=0;i<n;++i){
//			scanf("%d",&a[i]);
//			pNum[i].no = a[i];
//			pNum[i].index = i;
//		}
//		sort(pNum,pNum+n);
//		int low = 1;
//		pNum[0].index = low;
//		for(int i=1;i<n;++i){
//			if(pNum[i].no != pNum[i-1].no){
//				pNum[i].index = ++low;
//			}else{
//				pNum[i].index = low;
//			}
//		}
//
//		for(int i=0;i<n-1;++i) {
//			for(int j=0;j<n;++j){
//				if(a[i] == pNum[j].no) {
//					printf("%d ",pNum[j].index);
//					break;
//				}
//			}
//		}
//		for(int j=0;j<n;++j){
//			if(a[n-1] == pNum[j].no) {
//				printf("%d\n",pNum[j].index);
//				break;
//			}
//		}
//	}
//
//
//
//
//	return 0;
//}
