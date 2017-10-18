//#include <stdio.h>
//#include <string.h>
//int dp[3000050];
//
//int main() {
//	char ch;
//	double x,y;
//	int sum,a,b,c,money[35],t;
//	int n,k;
//	while(~scanf("%lf %d",&x,&n) &&n) {
//		sum = (int) (x*100);
//		memset(dp,0,sizeof(dp));
//		memset(money,0,sizeof(money));
//		int len = 0;
//		for(int i=0;i<n;++i) {
//			scanf("%d",&k);
//			a=b=c=0;
//			bool flag = true;
//			while(k--) {
//				scanf(" %c:%lf",&ch,&y);
//				t= (int)(y*100);
//				if(ch == 'A' && a+t<=60000) {
//					a+=t;
//				}else if(ch == 'B' && b+t<=60000){
//					b+=t;
//				}else if(ch == 'C' && c+t <=60000) {
//					c+=t;
//				}else {
//					flag = false;
//				}
//
//			}
//			if(a+b+c <= 100000 && a<=60000 && b<=60000 && c<= 60000 && flag) 
//				money[len++] = a+b+c;
//		}
//		for(int i=0;i<len;++i) {
//			for(int j=sum;j>=money[i];j--) {
//				if(dp[j] < dp[j-money[i]] + money[i])
//					dp[j] = dp[j-money[i]] + money[i];
//			}
//		}
//		printf("%.2f\n",(dp[sum]/100.0));
//
//	}
//
//
//	return 0;
//}