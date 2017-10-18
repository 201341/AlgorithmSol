//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//int main() {
//	int n;
//	int dp[26];
//	int a[26];
//	while(scanf("%d",&n) != EOF) {
//		memset(a,0,sizeof(a));
//		for(int i=1;i<=n;++i) {
//			scanf("%d",&a[i]);
//		}
//		for(int i=1;i<=n;++i){
//			int tmax = 1;
//			for(int j=1;j<i;++j) {
//				if(a[j] >= a[i]) {
//					tmax = max(tmax,dp[j]+1);
//				}
//			}
//			dp[i] = tmax;
//		}
//		int ans = 0;
//		for(int i=1;i<=n;++i) {
//			ans = max(ans,dp[i]);
//		}
//		printf("%d\n",ans);
//	}
//	return 0;
//}