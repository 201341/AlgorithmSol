////#define black 1
//#include <string.h>
//#include <iostream>
//using namespace std;
//#define white 0
//int color[4][5] ;   /*��ʼ��ɫ*/
//int flip[4][5] ;    /*��ת״̬��1����0����*/
//int d[5][2]={{0,0},{-1,0} ,{1,0} ,{0,-1},{0,1}} ; 
//
//int cango(int x , int y){
//	return 0 <= x && x < 4 && 0 <= y && y < 5 ;
//}
//
//int get_color(int x , int y){        /*��ȡ��x,y����������ɫ*/
//	int c = color[x][y] ;
//	for(int i = 0 ; i < 5 ; i++){
//		int xx = x+d[i][0] ;
//		int yy = y+d[i][1] ;
//		if(cango(xx ,yy) && flip[xx][yy])
//			c ^= 1 ;       //��
//	}
//	return c ;
//}
//
//int is_all_black(){   //��һ�з�ת�ĳ�ʼ״̬ȷ�����ж������ʼ״̬�ɲ����Գɹ�
//	int i , j ;
//	for(i = 1 ; i < 4 ; i++){
//		for(j = 0 ; j < 5 ; j++){
//			if(get_color(i-1 , j) == white)      //�����i��j�����Ϸ���i-1 , j�������ɫΪ�ף���i,j�����뷭
//				flip[i][j] = 1 ;
//		}
//	}
//	for(i = 0 ; i < 5 ; i++){
//		if(get_color(3 , i) == white)   //�����г�ȥ���һ��ȫ��ڣ��������һ�в��ܶ���ֻ�ܼ�����ɫ
//			return 0 ;
//	}
//	return 1 ;
//}
//
//int sum_flip(){   //�����ܵķ�ת����
//	int i , j , sum = 0 ;
//	for(i = 0 ; i < 4 ; i++)
//		for(j = 0 ; j < 5 ; j++)
//			sum += flip[i][j] ;
//	return sum ;
//}
//
//int DP(){
//	int i , j , ans = 100 ;
//	for(i = 0 ; i < (1<<5) ; i++){   //���ã�00000��2  ----- ��11111��2   ��������ö�ٳ�ʼ״̬
//		memset(flip , 0 , sizeof(flip)) ;  //�ǵó�ʼ
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