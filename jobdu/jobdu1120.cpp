//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//bool flag[6];
//int path[6];
//
//void DFS(char ch[],int idx){
//	int len = strlen(ch);
//	if( idx>=len ){
//		for(int i=0;i<len;++i){
//			if(flag[i]){
//				printf("%c",ch[path[i]]);
//			}
//		}
//		printf("\n");
//		return;
//	}
//	
//	for(int i=0;i<len;++i){
//		if(!flag[i]){
//			flag[i] = true;
//			path[idx] = i;
//			DFS(ch,idx+1);
//			flag[i] = false;
//		}
//	}
//	
//
//}
//
//
//int main() {
//	char ch[6];
//
//	while(scanf("%s",ch) != EOF){
//		sort(ch,ch+strlen(ch));
//		memset(flag,false,sizeof(flag));
//		memset(path,-1,sizeof(path));
//		DFS(ch,0);
//		printf("\n");
//	}
//
//
//
//	return 0;
//}