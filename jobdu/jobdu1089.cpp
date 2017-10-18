//#include <stdio.h>
//
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
//int main(){
//	int a,b,c,n;
//	int d,e,f;
//	while(scanf("%d",&n) != EOF) {
//		for(int i=0;i<n;++i){
//			scanf("%d%d",&a,&b);
//			c = a+b;
//			d = reverseNum(a);
//			e = reverseNum(b);
//			f = reverseNum(c);
//			if(d + e == f) {
//				printf("%d\n",c);
//			}else{
//				printf("NO\n");
//			}
//		}
//
//	}
//
//
//	return 0;
//}