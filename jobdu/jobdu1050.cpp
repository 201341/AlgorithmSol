//#include <stdio.h>
//
//#include <string.h>
//
//
//int solve(int n){
//	if(n == 1) return 0;
//	int count = 1,i;
//	for(i=2;i*i<n;++i) {
//		if(n%i == 0) {
//			count = count+i+n/i;
//		}
//	}
//	if(i*i == n) {
//		count = count + i;
//	}
//	return count;
//}
//
//int main() {
//	int n;
//	int b[100];
//	while(scanf("%d",&n) != EOF) {
//		int temp,low = 0;
//		for(int i=1;i<=n;++i){
//			temp = solve(i);
//			if(temp == i){
//				b[low++] = i;
//			}
//		}
//		for(int i=0;i<low-1;i++){
//			printf("%d ",b[i]);
//		}
//		printf("%d\n",b[low-1]);
//		
//	}
//
//
//
//
//	return 0;
//}