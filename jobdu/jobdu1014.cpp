//#include <iostream>
//#include <algorithm>
//#include <string.h>
//
//using namespace std;
//
//#define M 10
//
//struct Student{
//	char name[20];
//	int num;
//	int score;
//	bool operator < (const Student &A) const{
//		if( score == A.score) {
//			int tmp = strcmp(name,A.name);
//			return tmp < 0;
//		}else{
//			return score > A.score;
//		}
//	}
//}stu[1000];
//
//int main() {
//	int A[M];
//	int n,m,G;
//	while(cin >>n && n!=0) {
//		cin >>m>>G;
//		memset(A,0,sizeof(A));
//		memset(stu,0,sizeof(stu));
//		for(int i=0;i<m;++i) {
//			cin>>A[i];
//		}
//		for(int i=0;i<n;++i) {
//			cin>>stu[i].name>>stu[i].num;
//			for(int j=0,temp;j<stu[i].num;j++){
//				cin>>temp;
//				stu[i].score += A[temp-1];
//			}
//
//		}
//		sort(stu,stu+n);
//		int count = 0;
//		for(int i=0;i<n;++i) {
//			if(stu[i].score > G){
//				count++;
//			}
//		}
//		cout<<count<<endl;
//		for(int i=0;i<count;++i) {
//			cout<<stu[i].name<<" "<<stu[i].score<<endl;
//		}
//
//	}
//
//	return 0;
//}