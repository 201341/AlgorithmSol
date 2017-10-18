//#include <stdio.h>
//
//int main() {
//	int m,n;
//	while(scanf("%d%d",&m,&n) != EOF) {
//		if(m == 0 && n == 0) break;
//		int sum =0 ;
//		if( m == n) sum = 1;
//		else{
//			int left  = m*2;
//			int right = m*2+1;
//			sum = 1;
//			while(n > right) {
//				sum += (right - left)+1;
//				left *= 2;
//				right = right*2 +1;
//
//			}
//			if(n >= left) {
//				sum += (n-left) + 1;
//			}
//		}
//		printf("%d\n",sum);
//		
//
//	}
//	return 0;
//}