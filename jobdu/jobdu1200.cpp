//#include <stdio.h>
//
//
//
//int main() {
//	int n;
//	int a[4][5];
//	int b[2][5];
//	int c[2][5];
//	while(scanf("%d",&n) != EOF){
//		for(int i=0;i<n;++i) {
//			getchar();
//			for(int j=0;j<4;++j){
//				for(int k =0;k<5;++k){
//					scanf("%d",&a[j][k]);
//				}
//				getchar();
//			}
//			for(int k=0;k<5;++k){
//				b[0][k] = a[0][k];
//				b[1][k] = -2147483648;
//				c[0][k] = k;
//				c[1][k] = -1;
//			}
//			for(int j=0;j<5;++j){
//				for(int k=0;k<4;++k){
//					if(b[0][j] < a[k][j]){
//						b[0][j] = a[k][j];
//						c[0][j] = k+j;
//					}
//				}
//			}
//			for(int j=0;j<5;++j){
//				for(int k=0;k<4;++k){
//					if(b[1][j] < a[k][j] && (k+j) !=c[0][j]) {
//						b[1][j] = a[k][j];
//						c[1][j] = k+j;
//					}
//				}
//			}
//			for(int k=0;k<5;++k){
//				if(c[0][k] > c[1][k]){
//					int temp = b[1][k];
//					b[1][k] = b[0][k];
//					b[0][k] = temp;
//				}
//			}		
//
//			for( int j=0;j<2;++j){
//				for(int k=0;k<4;++k){
//					printf("%d ",b[j][k]);
//				}
//				printf("%d",b[j][4]);
//				printf("\n");
//			}
//		}
//
//
//
//	}
//
//
//	return 0;
//}