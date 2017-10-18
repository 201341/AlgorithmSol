//#include <stdio.h>
//#include <string.h>
//
//
//int map[6][6];
//int dir[][2] = {{0,1},{1,0},{0,-1},{-1,0}};
//bool vis[6][6];
//int stx,sty,endx,endy;
//int ans;
//
//
//void DFS(int stx,int sty,int sum,int status) {
//	int cost=0,sum2=0 ,status2=0;
//	if(sum < ans) {				//保证最小；
//		if(stx == endx && sty == endy) {
//			ans = sum;
//			return ;
//		}
//
//		for(int i=0;i<4;++i) {
//			int nx = stx + dir[i][0];
//			int ny = sty + dir[i][1];
//			if(nx >=0 && nx <6 && ny >=0 && ny <6 && !vis[nx][ny]) { 
//				cost = status * map[nx][ny];
//				sum2 = sum + cost;
//				status2 = cost%4 + 1;
//				vis[nx][ny] = true;		//标记
//				DFS(nx,ny,sum2,status2);
//				vis[nx][ny] = false;	//回溯
//			}
//		}
//	}
//
//}
//
//
//int main(){
////	freopen("E:\\in.txt","r",stdin);
//	int k;
//	scanf("%d",&k);
//	while(k--) {
//		for(int i=0;i<6;++i){
//			for(int j=0;j<6;++j){
//				scanf("%d",&map[i][j]);
//				vis[i][j] = false;
//			}
//		}
//		ans = 9999999;
//		scanf("%d%d%d%d",&stx,&sty,&endx,&endy);
//		DFS(stx,sty,0,1);
//		printf("%d\n",ans);
//	}
////	fclose(stdin);
//	return 0;
//}