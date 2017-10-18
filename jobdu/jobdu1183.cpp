//#include <stdio.h>
//
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		int p,c=1;
//		bool flag = false;
//		p=n*n;
//		while(p){
//			p=p/10;
//			c = c*10;
//		}
//		p = (n*n)%c;
//		while(p){
//			c = c/10;
//			p = (n*n)%c;
//			if(p == n) {
//				flag = true;
//			}
//		}
//		if( flag ){
//			printf("Yes!\n");
//		}else{
//			printf("No!\n");
//		}
//	}
//	return 0;
//	
//}