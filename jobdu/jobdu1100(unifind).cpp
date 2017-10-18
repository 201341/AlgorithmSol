//#include <stdio.h>
//#define maxsize 110
//#define M 100000
//int T[maxsize];
//int E[maxsize][maxsize];
//int visited[maxsize];
//
//int findRoot(int x) {
//	if(T[x]== -1) {
//		return x;
//	}else{
//		return findRoot(T[x]);
//	}
//}
//
//void DFS(int x,int n,int sum) {
//	for(int i=0;i<n;++i) {
//		if(visited[i] == 0 && E[x][i] != 0) {
//			visited[i] = 1;
//			T[i] = sum+E[x][i];
//			DFS(i,n,T[i]);
//		}
//	}
//}
//
//
//
//int main(){
//	int m,n;
//	while(scanf("%d%d",&n,&m) != EOF) {
//		for(int i=0;i<n;i++) {
//			T[i] = -1;
//			visited[i] = 0;
//		}
//		for(int i=0;i<n;++i) {
//			for(int j=0;j<n;++j) {
//				E[i][j] = 0;
//			}
//		}
//		int k=1,sum=0;
//		int a,b,roota,rootb;
//		for(int i=0;i<m;++i) {
//			scanf("%d%d",&a,&b);
//			roota = findRoot(a);
//			rootb = findRoot(b);
//			if(roota != rootb) {
//				T[roota] = rootb;
//				E[a][b] = k%M;
//				E[b][a] = k%M;
//			}
//			k=k*2%M;
//		}
//
//		visited[0] = 1;
//		for(int i=1;i<n;++i) {
//			T[i] = -1;
//		}
//		DFS(0,n,sum);
//		for(int i=1;i<n;++i) {
//			printf("%d\n",T[i]%M);
//		}
//
//	}
//
//}