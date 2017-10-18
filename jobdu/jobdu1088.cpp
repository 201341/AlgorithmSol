//#include <stdio.h>
//#include <string.h>
//
//
//
//int main() {
//	int tree[10000],L,M;
//	while(scanf("%d%d",&L,&M) != EOF) {
//		for(int i=0;i<=L;++i) {
//			tree[i] = 1;
//		}
//		int a,b,res = 0;
//		for(int i=0;i<M;++i) {
//			scanf("%d%d",&a,&b);
//			for(int j=a;j<=b;++j) {
//				tree[j] = 0;
//			}
//		}
//		for(int i=0;i<=L;++i) {
//			if(tree[i] == 1) {
//				res++;
//			}
//		}
//		printf("%d\n",res);
//	}
//	return 0;
//}