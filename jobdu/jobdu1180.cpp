//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	int a[100][100];
//	int b[100][100];
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		bool flag = true;
//		for(int i=0;i<n;++i) {
//			for(int j=0;j<n;++j) {
//				scanf("%d",&a[i][j]);
//			}
//		}
//		for( int j=0;j<n;++j) {
//			for(int i=0;i<n;++i) {
//				b[j][i] = a[i][j];
//			}
//		}
//		for(int i=0;i<n;++i) {
//			for(int j=0;j<n;++j) {
//				if(b[i][j] != a[i][j]) {
//					flag = false;
//				}
//			}
//		}
//		if(flag) {
//			printf("Yes!\n");
//		}else{
//			printf("No!\n");
//		}
//
//	}
//	return 0;
//}