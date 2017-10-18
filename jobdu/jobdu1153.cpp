//#include <iostream>
//#include <stack>
//#include <string.h>
//#include <stdio.h>
//using namespace std;
//
//struct sign{
//	int num;
//	char chr;
//};
//
//char str[110];
//char res[110];
//stack<sign> S;
//
//int main() {
//	while(scanf("%s",str) != EOF){
//		int i;
//		sign si;
//		memset(res,0,sizeof(res));
//		for(i=0;str[i]!=0;i++){
//			if(str[i] == '('){
//				si.num = i;
//				si.chr = '(';
//				S.push(si);
//			}else if(str[i] == ')'){
//				if(S.empty() == false && S.top().chr == '(') {
//					S.pop();
//				}else{
//					si.chr = ')';
//					si.num = i;
//					S.push(si);
//				}
//			}
//
//		}
//		while(!S.empty()) {
//			if(S.top().chr == ')'){
//				res[S.top().num] = '?';
//			}else{
//				res[S.top().num] = '$';
//			}
//			S.pop();
//		}
//		for(int j=0;j<i;j++) {
//			printf("%c",str[j]);
//		}
//		printf("\n");
//		for(int j=0;j<i;j++) {
//			if(res[j] == '\0'){
//				printf(" ");
//			}else{
//				printf("%c",res[j]);
//			}
//		}
//		printf("\n");
//
//	}
//	return 0;
//}