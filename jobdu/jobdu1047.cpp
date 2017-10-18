//#include <stdio.h>
//
//
//bool isPrime(int num) {
//	if(num <= 1) return false;
//	for(int i=2;i<num;++i) {
//		if(num %i == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int num;
//	while(scanf("%d",&num) != EOF) {
//		if( isPrime(num)){
//			printf("yes\n");
//		}else{
//			printf("no\n");
//		}
//	}
//	return 0;
//}