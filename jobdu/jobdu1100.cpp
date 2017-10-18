//#include <stdio.h>
//#include <string.h>
//#include <math.h>
//int ans[101][101];
//
//int main() {
//	int n,m;
//	int mod[500];
//	mod[0] = 1;
//	for(int i=1;i<500;++i) {
//		mod[i] = mod[i-1]*2%100000;
//	}
//	while(scanf("%d%d",&n,&m) != EOF){
//
//		for(int i=0;i<n;++i) {
//			for(int j=0;j<n;++j){
//				ans[i][j] = -1;
//			}
//			ans[i][i] = 0;
//		}
//
//
////  如何保证所求的为最短路呢？
//// 大整数加法容易溢出造成wa
//		int a,b;
//		for(int i=0;i<m;++i){
//			scanf("%d%d",&a,&b);
//			if(ans[a][b] == -1){
//				ans[a][b] = mod[i];
//				ans[b][a] = mod[i];
//			}
//			for (int j=0;j<n;++j)
//			{
//				for(int k=0;k<n;++k) {
//					if(ans[j][k] == -1 && ans[j][a] != -1 && ans[k][b] != -1){
//						ans[j][k] = ans[k][j]= ans[j][a] + ans[a][b] + ans[b][k];
//					}
//				}
//			}
//		}
//		for(int i=1;i<n;++i) {
//			if(ans[0][i] == -1){
//				printf("-1\n");
//			}else {
//				printf("%d\n",ans[0][i]%100000);
//			}
//		}
//	}
//
//	return 0;
//}