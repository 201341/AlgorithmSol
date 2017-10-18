//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//using namespace std;
//struct Num{
//	int a;
//	int b;
//	int c;
//	bool operator < (const Num &E) const {
//		if(c == E.c){
//			return b<E.b;
//		}
//		return c<E.c;
//	}
//};
//
//int size;
//
//void popStr(struct Num *num) {
//	sort(num,num+size);
//	if(size == 0){
//		printf("empty\n");
//	}else{
//		printf("%d+i%d\n",num[size-1].a,num[size-1].b);
//
//		num[size].a = 0;
//		num[size].b = 0;
//		num[size].c = 0;
//		size--;
//		printf("SIZE = %d\n",size);
//	}
//}
//
//void insertStr(char sh[],struct Num *num) {
//	int temp1=0,temp2 = 0;
//	int i;
//	for(i=0;sh[i] != '+';i++){
//		temp1 = temp1*10 +(sh[i]-'0');
//	}
//	num[size].a = temp1;
//	for(i=i+2;sh[i]!=0;++i){
//		temp2 = temp2*10+(sh[i]-'0');
//	}
//	num[size].b=temp2;
//	num[size].c = temp1*temp1+temp2*temp2;
//	printf("SIZE = %d\n",++size);
//}
//
//
//int main() {
//	int n;
//	char ch[20],sh[20];
//	struct Num cd[1001];
//	while(scanf("%d",&n) != EOF) {
//		size = 0;
//		memset(cd,0,sizeof(cd));
//		memset(ch,0,sizeof(ch));
//		memset(sh,0,sizeof(sh));
//		for(int i=0;i<n;++i){
//			scanf("%s",ch);
//			if(ch[0] == 'P') {
//				popStr(cd);
//
//			}else{
//				scanf("%s",sh);
//				insertStr(sh,cd);
//			}
//		}
//	}
//	return 0;
//}