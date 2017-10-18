//#include <stdio.h>
//
//#include <string.h>
//#include <vector>
//
//using namespace std;
//
//int solve(int a[],int pa,int qa,int b[],int pb,int qb){
//	vector<int> c;
//	for(int i=pa-1;i<qa;++i){
//		c.push_back(a[i]);
//	}
//	for(int i=pb-1;i<qb;++i){
//		c.push_back(b[i]);
//	}
//	int len = c.size();
//	return len%2==0?c[len/2-1]:c[len/2];
//
//}
//
//int main() {
//	int t,m,n;
//	int pa,qa;
//	int pb,qb;
//	int a[100000];
//	int b[100000];
//	while(scanf("%d",&t) != EOF) {
//		for(int i=0;i<t;++i) {
//			scanf("%d%d",&m,&n);
//			for(int i=0;i<m;++i){
//				scanf("%d",&a[i]);
//			}
//			for(int i=0;i<n;++i){
//				scanf("%d",&b[i]);
//			}
//			scanf("%d%d",&pa,&qa);
//			scanf("%d%d",&pb,&qb);
//			int ans = solve(a,pa,qa,b,pb,qb);
//			printf("%d\n",ans);
//
//		}
//
//	}
//
//
//
//	return 0;
//}