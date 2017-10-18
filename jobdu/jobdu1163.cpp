//#include <iostream>
//#include <string>
//
//
//using namespace std;
//
//bool isPrime(int n) {
//	if(n%10 != 1)	return false;
//	for(int i=2;i<n;i++){
//		if(n%i == 0){
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int n;
//	int b[1000];
//	while(cin>>n) {
//		int j=0;
//		for(int i=2;i<n;++i){
//			if(isPrime(i)){
//				b[j++] = i;
//			}
//		}
//		if(j==0){
//			cout<<-1<<endl;
//		}else{
//			cout<<b[0];
//			for(int i=1;i<j;i++){
//				cout<<" "<<b[i];
//			}
//			cout<<endl;
//		}
//	}
//	return 0;
//}