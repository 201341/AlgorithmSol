//#include <stdio.h>
//#include <string.h>
//int ans[200];
//bool flag[15];
//
//void DFS(int idx,int len,int a[]){
//	if(idx>=len){
//		int res=0;
//		for(int i=0;i<len;++i){
//			if(flag[i]) {
//				res+=a[i];
//			}
//		}
//		ans[res] = 1;
//		return;
//	}
//	flag[idx] = true;
//	DFS(idx+1,len,a);
//	flag[idx] = false;
//	DFS(idx+1,len,a);
//
//}
//
//int main() {
//
//	int a[15],count=0;
//
//	memset(ans,0,sizeof(0));
//	for(int i=0;i<5;++i){
//		a[i] = 8;
//	}
//	for(int i=5;i<9;++i){
//		a[i] =10;
//	}
//	for(int i=9;i<15;++i){
//		a[i] = 18;
//	}
//	DFS(0,15,a);
//	for(int i=0;i<200;++i){
//		if(ans[i] == 1) {
//			count++;
//		}
//	}
//	printf("%d\n",count-1);
//
//}