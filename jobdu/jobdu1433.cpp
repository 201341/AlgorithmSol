//#include <iostream>
//#include <algorithm>
//#include <iomanip>
//
//
//using namespace std;
//
//struct goods{
//	double w;  //重量
//	double f;  //总价值
//	double s;  //性价比
//	bool operator < (const goods& A) const{
//		return s>A.s;
//	}
//
//}buf[1000];
//
//
//int main() {
//	double m;
//	int n;
//	while(cin>>m>>n && m!= -1 && n!=-1){
//		for(int i=0;i<n;++i) {
//			cin>>buf[i].w>>buf[i].f;
//			buf[i].s = buf[i].w/buf[i].f;
//		}
//		sort(buf,buf+n);
//
//		int idx =0;
//		double ans =0;
//		while(m>0 && idx<n){
//			if(m>buf[idx].f) {
//				ans += buf[idx].w;
//				m -= buf[idx].f;
//			}else{
//				ans += m*buf[idx].w/buf[idx].f;
//				m = 0;
//			}
//			idx++;
//		}
//		cout<<setiosflags(ios::fixed)<<setprecision(3)<<ans<<endl;
//	}
//	return 0;
//}