//#include <stdio.h>
//#include <string.h>
//
//nan
//bool mark[1010];
//int prime[1010];
//int primeSize;
//void init() {
//	primeSize = 0;
//	for(int i=2;i<=1000;++i){
//		if(mark[i]) continue;
//		mark[i] = true;
//		prime[primeSize++] = i;
//		for(int j=i*i;j<=1000;j=j+2){
//			mark[i] = true;
//		}
//	}
//
//}
//
//int cnt[1010];
//int cnt2[1010];
//
//int main(){
//	int n,a;
//	init();
//	while(scanf("%d%d",&n,&a) != EOF) {
//		for(int i=0;i<primeSize;++i) {
//			cnt[i] = cnt2[i] = 0;
//		}
//
//		for(int i=0;i<primeSize;++i) {
//			int t = n;
//			while(t) {
//				cnt[i] += t/prime[i];
//				t = t/prime[i];
//			}
//		}
//		int ans = 123132123;
//		for(int i=0;i<primeSize;++i) {
//			while(a%prime[i] == 0) {
//				cnt2[i] ++;
//				a/=prime[i];
//			}
//			if(cnt2[i] == 0) continue;
//			if(cnt[i]/cnt2[i] < ans) {
//				ans = cnt[i]/cnt2[i];
//			}
//		}
//		printf("%d\n",ans);
//	
//	
//	}
//	return 0;
//
//
//}