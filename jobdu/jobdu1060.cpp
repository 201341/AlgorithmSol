//#include <stdio.h>
//
//#include <string.h>
//
//
//int solve(int n){
//	if(n == 1) return 0;
//	int count = 1,i;
//	for(i=2;i*i<n;++i) {
//		if(n%i == 0) {
//			count = count+i+n/i;
//		}
//	}
//	if(i*i == n) {
//		count = count + i;
//	}
//	return count;
//}
//
//int main() {
//	int b[100];
//	int c[100];
//	int temp,low = 0,index = 0;
//	for(int i=2;i<=60;++i){
//		temp = solve(i);
//		if(temp == i){
//			b[low++] = i;
//		}else if(temp > i) {
//			c[index++] = i;
//		}
//	}
//	printf("E: ");
//	for(int i=0;i<low-1;i++){
//		printf("%d ",b[i]);
//	}
//	printf("%d\n",b[low-1]);
//	printf("G: ");
//	for(int i=0;i<index-1;i++){
//		printf("%d ",c[i]);
//	}
//	printf("%d\n",c[index-1]);
//
//
//
//
//
//
//	return 0;
//}