//#include <string.h>
//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//
//int main() {
//	int n;
//	int a[1000];
//	int b[1000];
//	while(scanf("%d",&n) != EOF) {
//		for(int i=0;i<n;++i) {
//			scanf("%d",&a[i]);
//		}
//		sort(a,a+n);
//		int low = 1;
//		b[0] = a[0];
//		for(int i=1;i<n;++i) {
//			if(a[i] != a[i-1]) {
//				b[low++] = a[i];
//			}
//
//		}
//		for(int i=0;i<low-1;++i) {
//			printf("%d ",b[i]);
//		}
//		printf("%d\n",b[low-1]);
//	}
//
//
//
//
//
//	return 0;
//}