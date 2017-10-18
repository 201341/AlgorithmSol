//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//
//
//using namespace std;
//
//struct Stu{
//	int sNo;
//	int grade;
//
//	bool operator < (const Stu & E) const{
//		if(E.grade == grade) {
//			return sNo<E.sNo;
//		}
//		return grade < E.grade;
//	}
//}stuNum[101];
//
//
//int main(){
//	int n;
//	while (scanf("%d",&n) != EOF)
//	{
//		for(int i=0;i<n;++i){
//			scanf("%d%d",&stuNum[i].sNo,&stuNum[i].grade);
//		}
//		sort(stuNum,stuNum+n);
//		for(int i=0;i<n;++i) {
//			printf("%d %d\n",stuNum[i].sNo,stuNum[i].grade);
//		}
//
//	}
//
//	return 0;
//}