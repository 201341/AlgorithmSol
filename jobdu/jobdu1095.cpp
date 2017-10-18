//#include <stdio.h>
//
//void Present(int n) {
//	int pos = 14;
//	while(n) {
//		if(n>>pos) {
//			if(pos > 1) {
//				printf("2(");
//				Present(pos);
//				printf(")");
//			}else if(pos == 1) {
//				printf("2");
//			}else{
//				printf("2(0)");
//			}
//			n -= 1<<pos;
//			if(n > 0) printf("+");
//		}
//		pos --;
//	}
//
//}
//
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		Present(n);
//		printf("\n");
//
//	}
//
//
//	return 0;
//}