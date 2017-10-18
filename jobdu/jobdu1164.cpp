//#include <stdio.h>
//#include <string.h>
//
//void roate(int ma[10][10],int n) {
//	int mb[10][10];
//	for(int i=1;i<=n;++i)
//		for(int j=1;j<=n;j++)
//			mb[j][n+1-i] = ma[i][j];
//	for(int i=1;i<=n;++i)
//		for(int j=1;j<=n;++j)
//			ma[i][j]=mb[i][j];
//}
//
//bool cheack(int ma[10][10],int mb[10][10],int n) {
//	int j,i;
//	for(int i=1;i<=n;++i){
//		for(int j=1;j<=n;++j){
//			if(ma[i][j] != mb[i][j])
//				return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int ma[10][10],mb[10][10];
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		for(int i=1;i<=n;++i) {
//			for(int j=1;j<=n;++j){
//				scanf("%d",&ma[i][j]);
//			}
//			
//		}
//
//		for(int i=1;i<=n;++i)
//			for(int j=1;j<=n;++j)
//				scanf("%d",&mb[i][j]);
//
//		int k=0;
//		while(k<4) {
//			if(cheack(ma,mb,n)){
//				printf("%d\n",k*90);
//				break;
//			}
//			roate(ma,n);
//			k++;
//		}
//		if(k == 4) {
//			printf("-1\n");
//		}
//	}
//
//
//
//
//	return 0;
//}