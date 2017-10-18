//#include <stdio.h>
//     ´óÕûÊı
//
//struct bigInt{
//	int num[1000];
//	int size;
//
//	void init(){
//		size = 0;
//		for(int i =0 ;i<1000;++i){
//			num[i] = 0;
//		}
//	}
//
//	void outPut(){
//		printf("%d",num[size-1]);
//		for(int i = size-2;i>=0;i--){
//			printf("%04d",num[i]);
//		}
//		printf("\n");
//	}
//
//	bigInt operator *(const int x) const{
//		int i;
//		long long t = 0;
//		bigInt ret;
//		ret.init();
//		ret.num[0] = 1;
//		ret.size = 1;
//		for( i=0;i<size;++i){
//			t = t+num[i]*x;
//			ret.num[i] = t%10000;
//			t /= 10000;
//		}
//		if(t != 0){
//			ret.num[i++] = t;
//		}
//		ret.size = i;
//		return ret;
//
//	}
//
//
//
//};
//
//int main() {
//	int n;
//	bigInt res;
//	while(scanf("%d",&n) != EOF) {
//		if(n == 0) {
//			printf("0\n");
//		}
//		res.init();
//		res.num[0] = 1;
//		res.size = 1;
//		while(n != 0) {
//			res = res * n;
//			n--;
//		}
//		res.outPut();
//
//	}
//
//
//
//	return 0;
//}