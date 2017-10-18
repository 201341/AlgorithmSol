//#include <stdio.h>
//#include <string.h>
//
//
//int main() {
//	int a[100][100];
//	int b[100],c[100];
//	int m,n;
//	while(scanf("%d%d",&m,&n) != EOF) {
//		memset(a,0,sizeof(a));
//		memset(b,0,sizeof(b));
//		for(int i=0;i<m;++i){
//			for(int j=0;j<n;++j) {
//				scanf("%d",&a[i][j]);
//			}
//		}
//		for(int i=0;i<m;++i){
//			for(int j=0;j<n;++j) {
//				b[i]+=a[i][j];
//			}
//		}
//		for(int i=0;i<m;++i){
//			int max = a[i][0];
//			c[i] = 0+i;
//			for(int j=0;j<n;++j) {
//				if(max < a[i][j]) {
//					max = a[i][j];
//					c[i] = i+j;
//				}
//			}
//		}
//		for(int i=0;i<m;++i){
//			for(int j=0;j<n;++j) {
//				if(i+j == c[i]) {
//					a[i][j] = b[i];
//				}
//			}
//		}
//		for(int i=0;i<m;++i){
//			for(int j=0;j<n-1;++j) {
//				printf("%d ",a[i][j]);
//			}
//			printf("%d",a[i][n-1]);
//			printf("\n");
//		}
//	}
//	return 0;
//
//}