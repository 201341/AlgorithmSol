//#include <iostream>
//#include <string.h>
//using namespace std;
//
//
//int max(int a,int b) {
//	return a>b?a:b;
//}
//int main() {
//	int n;
//	int a[10000];
//	while(cin>>n && n!=0){
//		memset(a,0,sizeof(a));	
//		for(int i=0;i<n;++i){
//			cin>>a[i];
//		}
//		int sum=0,ax,ay,curbegin = 1,max = -1;
//		for(int i=0;i<n;++i) {
//			sum = sum+a[i];
//			if(max < sum) {
//				max = sum;
//				ax = curbegin;
//				ay = i;
//			}
//			if(sum < 0) {
//				curbegin = i+1;
//				sum = 0;
//			}
//		}
//
//
//		if( max <= 0) {
//			cout<<max<<" "<<a[0]<<" "<<a[n-1]<<endl;
//		}else{
//			cout<<max<<" "<<a[ax]<<" "<<a[ay]<<endl;
//		}
//
//	}
//
//	return 0;
//}