//#include <stdio.h>
//#include <algorithm>
//#include <string.h>
//
//
//using namespace std;
//
//struct stu{
//	char no[10];
//	char name[100];
//	int age;
//	char sex[5];
//	bool operator <(const stu &A) const{
//		return strcmp(no,A.no)<0;
//	}
//}buf[1000];
//
//
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		for(int i=0;i<n;i++) {
//			scanf("%s%s%s%d",buf[i].no,buf[i].name,buf[i].sex,&buf[i].age);
//		}
//		sort(buf,buf+n);
//		int t;
//		scanf("%d",&t);
//		while(t-- != 0) {
//			int ans = -1;
//			char x[10];
//			scanf("%s",x);
//			int left = 0;
//			int right = n-1;
//			while(right >= left) {
//				int mid = (right - left)/2 + left;
//				int cmp = strcmp(buf[mid].no,x);
//				if(cmp>0) {
//					right = mid - 1;
//
//				}else if (cmp == 0) {
//					ans = mid;
//					break;
//				}else {
//					left = mid + 1;
//				}
//			}
//
//			if(ans == -1) {
//				printf("No Answer!\n");
//			}else {
//				printf("%s %s %s %d\n",buf[ans].no,buf[ans].name,buf[ans].sex,buf[ans].age);
//			}
//
//		}
//	}
//	return 0;
//}
