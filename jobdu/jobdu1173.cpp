//#include <stdio.h>
//
//int main() {
//	int n,m;
//	int a[101],b[101];
//
//	while(scanf("%d",&n) != EOF) {
//		for(int i=0;i<n;++i) {
//			scanf("%d",&a[i]);
//		}
//		scanf("%d",&m);
//		for(int i=0;i<m;++i) {
//			scanf("%d",&b[i]);
//		}
//		bool flag;
//		for(int j=0;j<m;++j) {
//			flag = false;
//			for(int i=0;i<n;++i) {
//				if(b[j] == a[i]) {
//					flag = true;
//				}
//			}
//			if( flag == true) {
//				printf("YES\n");
//			}else{
//				printf("NO\n");
//			}
//		}
//	}
//
//
//	return 0;
//}