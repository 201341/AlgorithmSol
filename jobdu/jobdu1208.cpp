//#include <iostream>
//#include <string>
//#include <string.h>
//using namespace std;
//
//
//int main() {
//	string str;
//	int a[2000];
//	int ans[4000];
//	int cd[2000];
//	while(cin>>str) {
//		int len = str.length(),len2;
//		int low =0;
//		memset(cd,0,sizeof(cd));
//		memset(ans,0,sizeof(ans));
//		for(int i=0;i<len;++i){
//			a[i] = str[i]-'0';
//		}
//		for(int i=0;i<len;a[i]?0:++i){
//			int c =0;
//			for(int j=i;j<len;++j) {
//				a[j] = a[j] + c*10;
//				c = a[j]%2;
//				a[j] = a[j]/2;
//			}
//			ans[low++] = c;
//		}
//		len2 = 1;
//		for(int i=0;i<low;++i){
//			for(int k=0;k<len2;k++){
//				cd[k] *= 2;
//			}
//			cd[0] += ans[i];
//			int c=0,j=0;
//			for(;j<len2;++j){
//				cd[j] += c;
//				if(cd[j] >=10){
//					c = cd[j] /10;
//					cd[j] %= 10;
//				}else{
//					c=0;
//				}
//			}
//			while(c>0) {
//				cd[j++] = c%10;
//				c /= 10;
//			}
//			len2 = j;
//		}
//		for(int i=len2-1;i>=0;i--){
//			cout<<cd[i];
//		}
//		cout<<endl;
//	}
//
//
//
//
//	return 0;
//}