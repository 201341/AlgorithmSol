//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//
//
//int main(){
//	int n;
//	int a[10000];
//	while(scanf("%d",&n) != EOF) {
//		if(n == 0) break;
//		for(int i=0;i<n;++i) {
//			scanf("%d",&a[i]);
//		}
//		sort(a,a+n);
//		int temp;
//		if(n % 2==0) {
//			temp = (a[n/2] +a[n/2-1])/2;
//
//		}else{
//			temp = a[n/2];
//		}
//		printf("%d\n",temp);
//	}
//	return 0;
//}