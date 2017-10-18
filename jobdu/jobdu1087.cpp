//#include <stdio.h>
//#include <string.h>
//
//int solve(int n){
//	if(n == 1) return 1;
//	int count =0,i;
//	for(i=1;i*i<n;++i) {
//		if(n%i == 0) {
//			count=count+2;
//		}
//	}
//	if(i*i ==n) {
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	int n;
//	int a[1000];
//	while(scanf("%d",&n) != EOF) {
//		int temp;
//		for(int i=0;i<n;++i){
//			scanf("%d",&a[i]);
//			temp = solve(a[i]);
//			printf("%d\n",temp);
//		}
//
//	}
//	return 0;
//}