//#include <stdio.h>
//#include <string.h>
//
//
//int main() {
//	char ans[100][100];
//	char str[100];
//	bool flag[100];
//	while(scanf("%s",str) != EOF) {
//		int len = strlen(str);
//		int low = 0;
//		memset(ans,0,sizeof(ans));
//		memset(flag,false,sizeof(flag));
//		for(int i=0;i<len;++i){
//			if(!flag[str[i] -'0']){
//				ans[low++][0] = str[i];
//				flag[str[i]-'0'] = true;
//			}
//		}
//		for(int i=0;i<low;++i) {
//			int k=1;
//			for(int j=0;j<len;j++) {
//				if(str[j] == ans[i][0]) {
//					ans[i][k++] = '0'+j;
//				}
//			}
//		}
//		for(int i=0;i<low;++i) {
//			int le = strlen(ans[i]);
//			if(le >= 3) {
//				for(int j=1;j<le-1;j++) {
//					printf("%c:%d,",ans[i][0],ans[i][j]-'0');
//				}
//				printf("%c:%d",ans[i][0],ans[i][le-1]-'0');
//				printf("\n");
//			}
//		}
//	}
//
//
//	return 0;
//}