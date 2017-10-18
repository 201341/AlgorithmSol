//#include <stdio.h>
//
//int main(){
//	int n;
//	int a[10000];
//	while(scanf("%d",&n) != EOF){
//		a[0] = 0;
//		a[1] = 1;
//		for(int i=2;i<=2*n-1;++i) {
//			a[i] = a[i-1] + a[i-2];
//		}
//		for(int i=1;i<=n;++i){
//			printf("%d",a[0]);
//			for(int j=1;j<2*i-1;++j){
//				printf(" %d",a[j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}