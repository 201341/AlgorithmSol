//#include <stdio.h>
//#include <queue>
//
//using namespace std;
//
//bool mark[50][50][50];
//int maze[50][50][50];
//struct Node{
//	int x,y,z;
//	int t;
//};
//
//queue <Node> Q;
//int go[][3] = {
//	1,0,0,
//	-1,0,0,
//	0,1,0,
//	0,-1,0,
//	0,0,1,
//	0,0,-1,
//};
//
//int BFS(int a,int b,int c){
//	while(Q.empty() == false) {
//		Node nd = Q.front();
//		Q.pop();
//		for(int i=0;i<6;i++) {
//			int nx = nd.x+go[i][0];
//			int ny = nd.y+go[i][1];
//			int nz = nd.z+go[i][2];
//			if(nx<0 || nx>=a || ny<0 || ny>=b || nz<0 ||nz>=c){
//				continue;
//			}
//			if(maze[nx][ny][nz] == 1) continue;
//			if(mark[nx][ny][nz] == true) continue;
//			Node newNode;
//			newNode.x = nx;
//			newNode.y = ny;
//			newNode.z = nz;
//			newNode.t = nd.t + 1;
//			Q.push(newNode);
//			mark[nx][ny][nz] = true;
//			if(nx == a-1 && ny == b-1 && nz == c-1) return newNode.t;
//
//		}
//
//	}
//	return -1;
//}
//
//
//int main(){
//	int T;
//	scanf("%d",&T);
//	while(T--){
//		int a,b,c,t;
//		scanf("%d%d%d%d",&a,&b,&c,&t);
//		for(int i=0;i<a;i++){
//			for(int j=0;j<b;j++){
//				for(int k=0;k<c;k++){
//					scanf("%d",&maze[i][j][k]);
//					mark[i][j][k] = false;
//				}
//			}
//		}
//		while(Q.empty() == false) Q.pop();
//		mark[0][0][0] = true;
//		Node tmp;
//		tmp.t=tmp.x=tmp.y=tmp.z=0;
//		Q.push(tmp);
//		int res = BFS(a,b,c);
//		if(res <= t) printf("%d\n",res);
//		else{
//			printf("-1\n");
//		}
//	}
//	return 0;
//}