//#include <stdio.h>
//#define isYeap(x) x%100!=0 && x%4==0 || x%400==0?1:0
//int dayOfMonth[13][2]= {0,0, 31,31, 28,29, 31,31, 30,30, 31,31, 30,30, 31,31, 31,31, 30,30, 31,31, 30,30, 31,31 };
//
//struct Date{
//	int Day;
//	int Month;
//	int Year;
//	void nextDay(){
//		Day++;
//		if(Day > dayOfMonth[Month][isYeap(Year)]){
//			Day = 1;
//			Month++;
//			if(Month > 12) {
//				Month = 1;
//				Year++;
//			}
//		}
//	}
//};
//
//int buf[5001][12][32];
//
//int Abs(int x) {
//	return x<0?-x:x;
//}
//
//int main() {
//	Date tmp;
//	int cnt = 1;
//	tmp.Day = 1;
//	tmp.Month = 1;
//	tmp.Year = 0;
//	while(tmp.Year!=5001) {
//		int a = tmp.Year;
//		buf[tmp.Year][tmp.Month][tmp.Day] = cnt;
//		tmp.nextDay();
//		cnt++;
//		if(tmp.Year > a) {
//			cnt = 1;
//		}
//	}
//	int y,n;
//	while(scanf("%d%d",&y,&n) != EOF) {
//		int d,m;
//		for(int i=1;i<=12;i++) {
//			for(int j=1;j<32;++j) {
//				if(buf[y][i][j] == n) {
//					m=i;
//					d=j;
//					break;
//				}
//			}
//		}
//		printf("%4d-%02d-%02d\n",y,m,d);
//	}
//	return 0;
//}