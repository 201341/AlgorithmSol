//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int cmp(const void *a,const void *b) {
//	if(strlen((char*) a) == strlen((char*) b)) {
//		return strcmp((char*)a,(char*)b);
//	}else{
//		return strlen((char*)a) - strlen((char*)b);
//	}
//}
//
//int main(){
//	char b[100][650];
//	int i,n;
//	while(scanf("%d",&n) != EOF) {
//
//		for(int i=0;i<n;++i) {
//			scanf("%s",b[i]);
//		}
//		qsort(b,n,sizeof(b[0]),cmp);
//		for(int i=0;i<n;++i) {
//			printf("%s\n",b[i]);
//		}
//	}
//
//	return 0;
//}