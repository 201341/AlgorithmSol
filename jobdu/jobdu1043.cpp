//#include <stdio.h>
//#include <string.h>
//#define isYeap(x) x%100!=0 && x%4==0 || x%400==0?1:0
//int dayOfMonth[13][2]= {0,0, 31,31, 28,29, 31,31, 30,30, 31,31, 30,30, 31,31, 31,31, 30,30, 31,31, 30,30, 31,31 };
//char weekName[7][20] = {
//	"Sunday",
//	"Monday",
//	"Tuesday",
//	"Wednesday",
//	"Thursday",
//	"Friday",
//	"Saturday"
//};
//
//char MonthName[13][20]= {
//	"",
//	"January",
//	"February",
//	"March",
//	"April",
//	"May",
//	"June",
//	"July",
//	"August",
//	"September",
//	"October",
//	"November",
//	"December",
//};
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
//int buf[3001][12][32];
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
//	while(tmp.Year!=3001) {
//		buf[tmp.Year][tmp.Month][tmp.Day] = cnt;
//		tmp.nextDay();
//		cnt++;
//	}
//	int d,m,y;
//	char s[20];
//	while(scanf("%d%s%d",&d,&s,&y) != EOF) {
//		for(m=1;m<=12;m++) {
//			if(strcmp(s,MonthName[m]) == 0) {
//				break;
//			}
//		}
//		int days = buf[y][m][d] - buf[2012][7][16];
//		days+=1;
//		puts(weekName[(days%7+7)%7]);
//	}
//	return 0;
//}