//#include <stdio.h>
//#include <string.h>
//
//int max(int a,int b) {
//	return a>b?a:b;
//}
//int maxSum(int a[100][100],int n) {
//	int cur = 0;
//	int maxS = a[0][0];
//	int h[100];
//	for(int i=0;i<n;i++){
//		memset(h,0,sizeof(h));
//		for(int j=i;j<n;j++){
//			cur = 0;
//			for(int k=0;k<n;k++){
//				h[k] = h[k] + a[j][k];
//				cur += h[k];
//				maxS = max(maxS,cur);
//				cur = cur <0?0:cur;
//
//			}
//
//		}
//	}
//	return maxS;
//}
//
//int main() {
//	int a[100][100];
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		for(int i=0;i<n;++i){
//			for(int j=0;j<n;++j) {
//				scanf("%d",&a[i][j]);
//			}
//		}
//
//		int ans = maxSum(a,n);
//		printf("%d\n",ans);
//	}
//
//}