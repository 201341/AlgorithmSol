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
//	int d1,m1,y1;
//	while(scanf("%d%d%d",&y1,&m1,&d1) != EOF) {
//		printf("%d\n",buf[y1][m1][d1]);
//	}
//	return 0;
//}