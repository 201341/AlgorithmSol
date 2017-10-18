//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//
//bool cmp(char * a,char * b){
//	if(strlen(a)>strlen(b))
//		return false;
//	else
//		return true;
//}
//int main() {
//	int n;
//	char str[100][100];
//	char *ch[100];
//	while(scanf("%d",&n) != EOF){
//		int j=0;
//		getchar();
//		for(int i=0;i<n;++i){
//			gets(str[i]);
//			if(strcmp(str[i],"stop") !=0){
//				ch[j] = &str[i][0];
//				j++;
//			}else{
//				break;
//			}
//		}
//
//		sort(ch,ch+j,cmp);
//		for(int i=0;i<j;++i){
//			printf("%s\n",ch[i]);
//		}
//	}
//
//
//
//	return 0;
//}