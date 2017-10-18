//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	char ch[101];
//
//	while(gets(ch)) {
//		int len = strlen(ch);
//		if(ch[0]-'a' >= 0 && ch[0] -'a'<=25){
//			ch[0] = ch[0]-32;
//		}
//		for(int i=1;i<len-1;++i) {
//			if(ch[i] == ' ' || ch[i] == '\t' || ch[i] == '\n' || ch[i] == '\r') {
//				if(ch[i+1]-'a' >= 0 && ch[i] -'a'<=25){
//					ch[i+1] = ch[i+1]-32;
//				}
//			}
//		}
//
//		puts(ch);
//
//	}
//
//	return 0;
//
//}