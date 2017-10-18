//#include <stdio.h>
//#include <string.h>
//
//int Tree[1001];
//
//int findRoot(int x){
//	if(Tree[x] == -1) return x;
//	else{
//		return findRoot(Tree[x]);
//	}
//}
//
//int main() {
//	int n,m;
//	while(scanf("%d%d",&n,&m)!=EOF){
//		if(n == 0 && m == 0) break;
//		memset(Tree,0,sizeof(Tree));
//		for(int i=1;i<=n;++i){
//			Tree[i] = -1;
//		}
//		int a,b,count=0;
//		for(int i=1;i<=m;++i){
//			scanf("%d%d",&a,&b);
//			a = findRoot(a);
//			b = findRoot(b);
//			if(a != b){
//				Tree[a] = b;
//			}
//		}
//		for(int i=1;i<=n;++i){
//			if(Tree[i] == -1){
//				count++;
//			}
//		}
//		if(count == 1){
//			printf("YES\n");
//		}else{
//			printf("NO\n");
//		}
//	}
//
//	return 0;
//}