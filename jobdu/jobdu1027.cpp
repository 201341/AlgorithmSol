//#include <stdio.h>
//#include <string.h>
//int Tree[1000];
//int d[1000];
//
//int findRoot(int x) {
//	if(Tree[x] == -1) return x;
//	else 
//		return findRoot(Tree[x]);
//}
//
//int main() {
//	int n,m,x,y;
//
//	while(scanf("%d",&n)!=EOF ) {
//		if(n == 0) break;
//		scanf("%d",&m);
//		memset(Tree,0,sizeof(d));
//		for(int i=1;i<=n;++i){
//			Tree[i] = -1;
//		}
//		while(m-- != 0) {
//			scanf("%d%d",&x,&y);
//			d[x]++;
//			d[y]++;
//			x = findRoot(x);
//			y = findRoot(y);
//			if(x != y) Tree[x] = y;
//		}
//		int i;
//		for(i=1;i<=n;++i) {
//			if(d[i]%2 || findRoot(i) != findRoot(1) ) break;
//		}
//		if(i<=n) {
//			printf("0\n");
//		}else{
//			printf("1\n");
//		}
//
//	}
//	return 0;
//}