//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//
//
//using namespace std;
//int ans[1001];
//
//int main(){
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		memset(ans,0,sizeof(ans));
//		for(int i=1;i<=n;++i) {
//			scanf("%d",&ans[i]);
//		}
//		int deep;
//		scanf("%d",&deep);
//		int l = (int)pow(2,(double)(deep-1));
//		int r = (int)pow(2,(double)deep) - 1;
//		if(r < n) {
//			for(int i=l;i<r;++i) {
//				printf("%d ",ans[i]);
//			}
//			printf("%d\n",ans[r]);
//		}else if( l<=n && n<=r ) {
//			for(int i=l;i<n;++i) {
//				printf("%d ",ans[i]);
//			}
//			printf("%d\n",ans[n]);
//
//		}else{
//			printf("EMPTY\n");
//		}
//
//	}
//	return 0;
//}