//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//
//struct pair{
//	int a;
//	int b;
//
//	bool operator < (const pair &E) const{
//		if(a != E.a) {
//			return a<E.a;
//		}else{
//			return b<E.b;
//		}
//	}
//}newPair[1001];
//
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		for(int i=0;i<n;++i) {
//			scanf("%d%d",&newPair[i].a,&newPair[i].b);
//		}
//		sort(newPair,newPair+n);
//		printf("%d %d\n",newPair[0].a,newPair[0].b);
//	}
//	return 0;
//}