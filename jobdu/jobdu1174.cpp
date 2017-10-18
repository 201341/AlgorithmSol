//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//
//
//int main(){
//	int n,k;
//	int a[1000],b[1000];
//	while(scanf("%d",&n) != EOF) {
//		memset(a,0,sizeof(a));
//		memset(b,0,sizeof(b));
//		for(int i=0;i<n;++i){
//			scanf("%d",&a[i]);
//		}
//		scanf("%d",&k);
//		sort(a,a+n);
//		int low = 1;
//		b[0] = a[0];
//		for(int i=1;i<n;++i) {
//			if(a[i] != a[i-1]){
//				b[low++] = a[i];
//			}
//		}
//		printf("%d\n",b[k-1]);
//
//	}
//
//	return 0;
//}