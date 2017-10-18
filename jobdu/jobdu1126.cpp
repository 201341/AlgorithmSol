//#include <stdio.h>
//#include <string.h>
//int a[100];
//bool flag[100];
//
//int main() {
////	freopen("E:\\in.txt","r",stdin);
//	int k,n;
//	scanf("%d",&k);
//	while(k--) {
//		memset(a,0,sizeof(a));
//		memset(flag,false,sizeof(flag));
//		scanf("%d",&n);
//		int count =0;
//		for(int i=0;i<n;++i) {
//			scanf("%d",&a[i]);
//		}
//		if(a[0] != a[1]) {
//			flag[0] = true;
//			count++;
//		}
//		if(a[n-2] != a[n-1]){
//			flag[n-1] = true;
//			count++;
//		}
//		for(int i=1;i<n-1;++i) {
//			if(a[i] > a[i-1] && a[i] > a[i+1]) {
//				flag[i] = true;
//				count++;
//			}
//			if(a[i] < a[i-1] && a[i] < a[i+1]) {
//				flag[i] = true;
//				count++;
//			}
//			
//		}
//		int j;
//		for(j=0;j<n && count >1;++j) {
//			if(flag[j]) {
//				printf("%d ",j);
//				count--;
//			}
//		}
//		for(;j<n;++j) {
//			if(flag[j]) {
//				printf("%d\n",j);
//			}
//		}
//	}
//
//	return 0;
//
//}