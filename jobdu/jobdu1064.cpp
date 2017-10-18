//#include <stdio.h>
//
//int reverseNum(int x){
//	int num = 0;
//	while(x > 0){
//		num = num *10 + (x%10);
//		x = x/10;
//	}
//	return num;
//}
//
//
//int main() {
//	for(int i=1000;i<10000;++i){
//		int num = reverseNum(i);
//		if(num == i*9) {
//			printf("%d\n",i);
//		}
//	}
//
//	return 0;
//}