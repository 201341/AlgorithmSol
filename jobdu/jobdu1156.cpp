//#include <stdio.h>
//#include <string.h>
//
//
//int main() {
//	int n,m;
//	int a[200];
//	int b[200];
//	while(scanf("%d%d",&n,&m) != EOF) {
//		memset(a,0,sizeof(a));
//		memset(b,0,sizeof(b));
//		for(int i=0;i<n;++i) {
//			scanf("%d",&a[i]);
//		}
//		for(int i=0;i<n;++i) {
//			for(int j=0;j<n;++j) {
//				if(a[j] == a[i] && j!=i){
//					b[i]++;
//				}
//			}
//		}
//		for( int i=0;i<n;++i) {
//			if(b[i] == 0) {
//				printf("BeiJu\n");
//			}else {
//				printf("%d\n",b[i]);
//			}
//		}
//	
//	
//	
//	}
//
//
//
//
//	return 0;
//}