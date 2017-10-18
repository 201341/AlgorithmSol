//#include <stdio.h>
//
//
//bool isPalindrome(int x) {
//	if(x<0) return false;
//	int len=1;
//	while(x/len>=10){
//		len*=10;
//	}
//
//	while(x>0){
//		int left=x/len;
//		int right=x%10;
//		if(left != right){
//			return false;
//		}else{
//			x=(x%len)/10;
//			len/=100;
//		}
//	}
//
//	return true;
//
//
//}
//
//int main() {
//	for(int i=0;i<256;++i) {
//		if(isPalindrome(i*i)){
//			printf("%d\n",i);
//		}
//	}
//
//
//	return 0;
//}