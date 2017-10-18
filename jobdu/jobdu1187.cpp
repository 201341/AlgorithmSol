//#include <stdio.h>
//#include <string.h>
//#include <algorithm>
//
//using namespace std;
//
//struct employer{
//	int no;
//	char name[11];
//	int age;
//
//	bool operator < (const employer & E) const{
//		if(age == E.age && no == E.no) {
//			return strcmp(name,E.name)<0;
//		}else if(age == E.age) {
//			return no < E.no;
//		}else {
//			return age < E.age;
//		}
//	}
//}emp[100];
//
//
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		for(int i=0;i<n;++i) {
//			scanf("%d%s%d",&emp[i].no,emp[i].name,&emp[i].age);
//		}
//		sort(emp,emp+n);
//		int temp = n>3?3:n;
//		for(int i=0;i<temp;++i){
//			printf("%d %s %d\n",emp[i].no,emp[i].name,emp[i].age);
//		}
//	}
//	return 0;
//}