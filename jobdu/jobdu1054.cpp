//#include <iostream>
//#include <algorithm>
//#include <string>
//
//using namespace std;
//
//
//int main() {
//	string str;
//	int a[200];
//	while(getline(cin,str)){
//		memset(a,0,sizeof(a));
//		int len = str.length();
//		for(int i=0;i<len;++i){
//			a[i] = str[i] - 'a';
//		}
//		sort(a,a+len);
//		for(int i=0;i<len;++i){
//			str[i] = a[i] + 'a';
//		}
//		cout<<str<<endl;
//
//	}
//
//	return 0;
//}