//#include <stdio.h>
//#include <string.h>
//
//
//int main(){
//	char ch[1001];
//	char sh[1001];
//	while(scanf("%s",ch) != EOF) {
//		int len = strlen(ch);
//		int low = 0;
//		for(int i=len-1;i>=0;--i){
//			sh[low++] = ch[i];
//		}
//		sh[low] = '\0';
//		if(strcmp(sh,ch) == 0) {
//			printf("Yes!\n");
//		}else{
//			printf("No!\n");
//		}
//		memset(ch,0,sizeof(ch));
//		memset(sh,0,sizeof(sh));
//
//	}
//
//
//
//	return 0;
//}