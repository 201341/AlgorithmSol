//#include <string.h>
//#include <stdio.h>
//
//int getMin(int h[],int len,int k) {
//	int left = 0,right = 0,sum = 0;
//	int ret = -1,tmp;
//	for(;right<len;++right) {
//		sum+=h[right];
//		while(sum >=k) {
//			tmp = right - left+1;
//			if(ret == -1 || tmp < ret) ret = tmp;
//			sum-=h[left];
//			left++;
//		}
//	}
//	return ret;
//
//}
//
//int main() {
//	int arr[101][101];
//	int h[101];
//	int N,M,K;
//	while(scanf("%d%d%d",&N,&M,&K) != EOF) {
//		for(int i=0;i<N;++i) {
//			for(int j=0;j<M;++j) {
//				scanf("%d",&arr[i][j]);
//			}
//		}
//		int ans = -1;
//		for(int i=0;i<N;++i) {
//			memset(h,0,sizeof(h));
//			for(int j=i;j<N;++j) {
//				for(int t=0;t<M;++t) {
//					h[t]+=arr[j][t];
//				}
//				int tmp = getMin(h,M,K)*(j-i+1);
//				if(tmp<0) continue;
//				if(ans == -1 || tmp < ans) ans = tmp;
//			}
//		}
//		printf("%d\n",ans);
//
//	}
//	return 0;
//}