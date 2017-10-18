//#include <stdio.h>
//#include <algorithm>
//
//using namespace std;
//
//struct Tri{
//	int x;
//	int y;
//}T[200];
//
//bool cmpX(Tri aa,Tri bb){
//	return aa.x<bb.x;
//};
//
//int max(int wx,int wy){
//	return wx>wy?wx:wy;
//}
//int min(int aaa,int bbb){
//	return aaa<bbb?aaa:bbb;
//}
//
//int main() {
//	int a,b;
//	while(scanf("%d%d",&a,&b) != EOF){
//		if(a == 0 && b == 0) break;
//		T[0].x = a;
//		T[0].y = b;
//		int i =1,minY=b,maxY=b;
//		while(scanf("%d%d",&a,&b) != EOF) {
//			if(a == 0 && b == 0) break;
//			T[i].x = a;
//			T[i].y = b;
//			i++;
//		}
//		sort(T,T+i,cmpX);
//		
//		for(int j=0;j<i;++j) {
//			maxY = max(maxY,T[j].y);
//			minY = min(minY,T[j].y);
//		}
//		printf("%d %d %d %d\n",T[0].x,minY,T[i-1].x,maxY);
//	}
//
//
//	return 0;
//}