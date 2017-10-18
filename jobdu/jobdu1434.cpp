//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//struct program{
//	int start;
//	int end;
//	bool operator < (const program & A) const{
//		return end<A.end;
//	}
//}buf[100];
//
//int main() {
//	int n;
//	while(cin>>n && n!=0) {
//		for(int i=0;i<n;++i) {
//			cin>>buf[i].start>>buf[i].end;
//		}
//
//		sort(buf,buf+n);
//
//		int ans=0,current=0;
//		for(int i=0;i<n;++i) {
//			if(current <= buf[i].start) {
//				ans++;
//				current = buf[i].end;
//			}
//	
//
//		}
//		cout<<ans<<endl;
//
//	}
//
//	return 0;
//}