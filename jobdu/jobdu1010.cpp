//#include <stdio.h>
//#include <string.h>
//
//
//
//int Find(char s[]) {
//	char map[][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
//	for(int i=0;i<10;++i) {
//		if(!strcmp(s,map[i]))
//			return i;
//	}
//	return -1;
//}
//
//int main() {
//	char A[20];
//	int a,b;
//	while(true) {
//		a=b=0;
//		while(scanf("%s",A) && strcmp(A,"+") != 0){
//			a = a*10 + Find(A);
//		}
//		while(scanf("%s",A) && strcmp(A,"=") != 0) {
//			b = b*10 + Find(A);
//		}
//		if(a == 0 && b==0) {
//			break;
//		}
//		printf("%d\n",a+b);
//	}
//	return 0;
//}