//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main() {
//	string str;
//	string ch;
//	while(cin >> str) {
//		cin >> ch;
//		int lenStr = str.length();
//		int lenCh = ch.length();
//		bool flag;
//		int count = 0;
//		for(int i=0; i<=lenStr-lenCh;++i) {
//			int low = i;
//			flag = true;
//			for(int j=0;j<lenCh;++j) {
//				if(low < lenStr &&ch[j] == str[low]) {
//					low++;
//				}else {
//					flag = false;
//					break;
//				}
//			}
//			if(flag == true) {
//				count++;
//			}
//		}
//		cout<<count<<endl;
//	}
//
//
//
//	return 0;
//}