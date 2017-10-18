//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	int a,b;
//	char str[40];
//	while(scanf("%d%s%d",&a,str,&b) != EOF) {
//		int tmp=0,len = strlen(str),c=1;
//		for(int i=len-1;i>=0;--i) {
//			if(str[i] -'0'>=0 && str[i] - '0'<=9){
//				tmp+=(str[i]-'0')*c;
//			}else if(str[i] - 'A'>=0 && str[i] - 'A'<=25){
//				tmp+= (str[i]-'A'+10)*c;
//			}else{
//				tmp+=(str[i]-'a'+10)*c;
//			}
//			c = c*a;
//		}
//		char ans[200],size=0;
//		do{
//			int x = tmp%b;
//			ans[size++]=(x<10)?x+'0':x-10+'A';
//			tmp=tmp/b;
//		}while(tmp);
//
//		for(int i=size-1;i>=0;--i){
//			printf("%c",ans[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}