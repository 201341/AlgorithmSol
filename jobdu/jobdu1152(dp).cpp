//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//dp
//using namespace std;
//struct Ve{
//	int price;
//	int score;
//	float percent;
//
//	bool operator <(const Ve & E) const{
//		return percent > E.percent;
//	}
//}v[100];
//
//
//int main() {
//	int c,n;
//	while(scanf("%d%d",&c,&n) != EOF){
//		memset(v,0,sizeof(v));
//		for(int i=0;i<n;++i){
//			scanf("%d%d",&v[i].price,&v[i].score);
//			v[i].percent = (float)(v[i].score/v[i].price);
//		}
//		sort(v,v+n);
//		int ans = 0;
//		for(int i=0;i<n;++i) {
//			if(c>=v[i].price ) {
//				ans += v[i].score;
//				c = c-v[i].price;
//			}
//		}
//		printf("%d\n",ans);
//	}
//
//
//
//	return 0;
//}
//#include<cstdio>
//#include<cstring>
//int max(int a,int b)
//{
//	return a>b?a:b;
//}
//int main()
//{
//	int F[1001],C,N,i,j,Vi,Pi;
//	while(~scanf("%d%d",&C,&N))
//	{
//		memset(F,0,sizeof(F));
//		for(i=1; i<=N; ++i)
//		{
//			scanf("%d%d",&Pi,&Vi);
//			for(j=C; j>=Pi; --j)
//				F[j] = max(F[j],F[j-Pi]+Vi);
//		}
//		printf("%d\n",F[C]);
//	}
//}