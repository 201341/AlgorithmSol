////#define black 1
//#include <string.h>
//#include <iostream>
//using namespace std;
//#define white 0
//int color[4][5] ;   /*初始颜色*/
//int flip[4][5] ;    /*翻转状态，1翻，0不翻*/
//int d[5][2]={{0,0},{-1,0} ,{1,0} ,{0,-1},{0,1}} ; 
//
//int cango(int x , int y){
//	return 0 <= x && x < 4 && 0 <= y && y < 5 ;
//}
//
//int get_color(int x , int y){        /*获取（x,y）处最终颜色*/
//	int c = color[x][y] ;
//	for(int i = 0 ; i < 5 ; i++){
//		int xx = x+d[i][0] ;
//		int yy = y+d[i][1] ;
//		if(cango(xx ,yy) && flip[xx][yy])
//			c ^= 1 ;       //翻
//	}
//	return c ;
//}
//
//int is_all_black(){   //第一行翻转的初始状态确定后，判断这个初始状态可不可以成功
//	int i , j ;
//	for(i = 1 ; i < 4 ; i++){
//		for(j = 0 ; j < 5 ; j++){
//			if(get_color(i-1 , j) == white)      //如果（i，j）正上方（i-1 , j）最后颜色为白，则（i,j）必须翻
//				flip[i][j] = 1 ;
//		}
//	}
//	for(i = 0 ; i < 5 ; i++){
//		if(get_color(3 , i) == white)   //所有行除去最后一行全变黑，但是最后一行不能动，只能计算颜色
//			return 0 ;
//	}
//	return 1 ;
//}
//
//int sum_flip(){   //计算总的翻转次数
//	int i , j , sum = 0 ;
//	for(i = 0 ; i < 4 ; i++)
//		for(j = 0 ; j < 5 ; j++)
//			sum += flip[i][j] ;
//	return sum ;
//}
//
//int DP(){
//	int i , j , ans = 100 ;
//	for(i = 0 ; i < (1<<5) ; i++){   //利用（00000）2  ----- （11111）2   二进制来枚举初始状态
//		memset(flip , 0 , sizeof(flip)) ;  //记得初始
//		for(j = 0 ; j < 5 ; j++)
//			flip[0][j] = (i&(1<<j)) ? 1 : 0 ;
//		if(is_all_black())                
//			ans = min(ans , sum_flip()) ;
//	}
//	return ans ;
//}
//
//int main(){
//	int T , i , j ;
//	string s ;
//	cin>>T ;
//	while(T--){
//		for(i = 0 ; i < 4 ; i++){
//			cin>>s ;
//			for(j = 0 ; j < 5 ; j++)
//				color[i][j] = s[j] - '0' ;
//		}
//		cout<<DP()<<endl ;
//	}
//	return 0 ;
//}