//#include <iostream>
//#include <algorithm>
//#include <math.h>
//#include <stdlib.h>
//
//using namespace std;
//
//
//int main() {
//	int n;
//	int a[20];
//	while(cin >>n) {
//		for(int i=0;i<n;++i){
//			cin>>a[i];
//		}
//		int maxNum,minNum;
//		maxNum = minNum = a[0];
//		for(int i=0;i<n;++i){
//			maxNum = max(maxNum,a[i]);
//			minNum = min(minNum,a[i]);
//		}
//		for(int i=0;i<n;++i) {
//			if(maxNum == a[i]){
//				maxNum = i;
//			}
//			if(minNum == a[i]){
//				minNum = i;
//			}
//		}
//		int temp = a[minNum];
//		a[minNum] = a[maxNum];
//		a[maxNum] = temp;
//		for(int i=0;i<n-1;++i){
//			cout<<a[i]<<" ";
//		}
//		cout<<a[n-1]<<endl;
//
//
//	}
//
//
//
//	return 0;
//}