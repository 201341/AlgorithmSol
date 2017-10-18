//#include <stdio.h>
//
//
//
//int solve(long long x){
//	int ans =0;
//	while(x) {
//		ans += x%10;
//		x = x/10;
//	}
//	return ans;
//}
//
//int main() {
//	long long n;
//	while(scanf("%lld",&n) !=EOF) {
//		if(n == 0) break;
//		long long res = n*n;
//		printf("%d %d\n",solve(n),solve(res));
//	}
//}