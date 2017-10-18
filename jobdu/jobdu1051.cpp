//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	int a[101];
//	int x,n;
//	while(scanf("%d%d",&x,&n) !=EOF) {
//		memset(a,0,sizeof(a));
//		int carry = 0,i;
//		for(i=0;i<n;++i) {
//			for(int j=0;j<=i;++j) {
//				a[j] = a[j] + x+carry;
//				carry = a[j]/10;
//				a[j] = a[j] % 10;
//
//			}
//			if(carry != 0) {
//				a[i+1] = carry;
//				carry = 0;
//			}
//		}
//		for(int j=a[i] == 0?i-1:i;j>=0;--j) {
//			printf("%d",a[j]);
//		}
//		printf("\n");
//	
//	
//	
//	}
//
//
//	return 0;
//
//}
