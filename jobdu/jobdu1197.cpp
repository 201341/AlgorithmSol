//#include <stdio.h>
//#include <string.h>
//
//int  fun(char a, int* array) {
//	int i = 0,count = 0;
//	for (i = 0; i < 8; i++) {
//		array[7 - i] = a % 2;
//		if(array[7-i] == 1){
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}
//
//int main() {
//	char str[101];
//	while(scanf("%s",str) != EOF){
//		int len = strlen(str);
//		int array[8];
//		for(int i=0;i<len;++i){
//			int b = fun(str[i], array);
//			if(b % 2 == 0) {
//				array[0] = array[0] == 1?0:1;
//			}
//			for (int j = 0; j < 8; ++j) {
//				printf("%d", array[j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}