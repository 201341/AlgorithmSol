//#include <stdio.h>
//
//
//int main() {
//	int n;
//	while(scanf("%d",&n)!=EOF){
//		int x,y,z,ans,i,j;
//		scanf("%d%d%d",&x,&y,&z);
//		for( i=9;i>0;i--) {
//			for(j=9;j>=0;j--) {
//				ans = i*10000 + x*1000+y*100+z*10+j;
//				if( ans%n == 0) {
//					printf("%d %d %d\n",i,j,ans/n);
//					i=-1;
//					break;
//				}
//			}
//		}
//		if( i == 0) {
//			printf("0\n");
//		}
//	}
//
//	return 0;
//}