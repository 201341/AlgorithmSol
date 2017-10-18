//#include <stdio.h>
//#include <string.h>
//char a[36] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','G','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
//
//
//int main() {
//	char str[100];
//	char res[100];
//	int m,n;
//	while(scanf("%d%d",&m,&n) != EOF) {
//		memset(str,0,sizeof(str));
//		memset(res,0,sizeof(res));
//		scanf("%s",str);
//		int len = strlen(str);
//		long long temp=0;
//		int c = 1,low = 0;
//		for(int i=len-1;i>=0;--i) {
//			for(int j=0;j<36;++j) {
//				if(str[i] == a[j]) {
//					temp = temp + j*c;
//				}
//			} 
//			c = c*m;
//		}
//		
//		while(temp) {
//			res[low++] = a[temp%n];
//			temp = temp / n;
//		}
//		for(int i=low-1;i>=0;--i) {
//			printf("%c",res[i]);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}