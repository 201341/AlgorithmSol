//#include <stdio.h>
//#include <string.h>
//int time[26] = {
//	1,2,3,          //a,b,c
//	1,2,3,			//d,e,f
//	1,2,3,			//g,h,i
//	1,2,3,			//j,k,l
//	1,2,3,			//m,n,l
//	1,2,3,4,		//p,q,r,s
//	1,2,3,			//t,u,v
//	1,2,3,4		    //w,x,y,z
//};
//
//int keys[26] = {
//	1,1,1,
//	2,2,2,
//	3,3,3,
//	4,4,4,
//	5,5,5,
//	6,6,6,6,
//	7,7,7,
//	8,8,8,8
//};
//
//
//
//int main(){
//	char ch[101];
//	while(scanf("%s",ch) != EOF){
//		int len = strlen(ch);
//		char pre = ch[0];
//		int res = time[ch[0]-97];
//		for(int i=1;i<len;++i) {
//			if(keys[ch[i] - 97] == keys[pre-97]){
//				res += 2;
//			}
//			res += time[ch[i] -97];
//			pre = ch[i];
//		}
//		printf("%d\n",res);
//	}
//
//	return 0;
//
//}