//#include <stdio.h>
//
//int main() {
//	int a,b,k;
//	while(scanf("%d %d %d",&a,&b,&k)!=EOF) {
//		if(a == 0 && b==0) break;
//		int count = 0;
//		int sum = a+b;
//		for(int i=1;i<=k;++i) {
//			int c = a%10;
//			int d = b%10;
//			if(c == d) {
//				count++;
//			}
//			a = a/10;
//			b = b/10;
//		}
//		if(count == k) {
//			printf("-1\n");
//		}else {
//			printf("%d\n",sum);
//		}
//	}
//
//
//
//	return 0;
//}