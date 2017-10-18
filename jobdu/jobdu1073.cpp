//#include <stdio.h>
//#include <string.h>
//
//
//int main() {
//	int a[100][100];
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		memset(a,0,sizeof(0));
//		a[1][1] = 1;
//		a[2][1] = 1;
//		a[2][2] = 1;
//		for(int i=3;i<=n;++i){
//			a[i][1] = 1;
//			a[i][n] = 1;
//			for(int j=2;j<i;++j){
//				a[i][j] = a[i-1][j]+a[i-1][j-1];
//			}
//		}
//		for(int i=2;i<=n;++i) {
//			for(int j=1;j<i;++j) {
//				printf("%d ",a[i][j]);
//			}
//			printf("%d\n",a[i][i]);
//		}
//
//
//
//	}
//
//
//
//	return 0;
//}