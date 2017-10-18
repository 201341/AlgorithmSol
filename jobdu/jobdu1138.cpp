//#include <iostream>
//#include <string>
//#include <stack>
//#include <vector>
//
//using namespace std;
//
//
//int main() {
//	string str;
//	stack<char> res;
//	while(cin>>str){
//		int len = str.length();
//		vector<int> a(len,0);
//		for(int i=0;i<len;++i){
//			a[i] = str[i]-'0';
//		}
//		for(int i=0;i<len;a[i]?0:++i){
//			int c=0;
//			for(int j=i;j<len;++j){
//				a[j] = a[j]+c*10;
//				c = a[j] % 2;
//				a[j] = a[j]/2;
//			}
//			res.push('0'+c);
//		}
//
//		while(res.empty() != true && res.top() == '0' && res.size()!=1) {
//			res.pop();
//		}
//		while(res.empty() != true){
//			cout<<res.top();
//			res.pop();
//		}
//		cout<<endl;
//	}
//
//	return 0;
//}
//
