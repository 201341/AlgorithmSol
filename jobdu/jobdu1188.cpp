//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//
//struct ListNode {
//	int num;
//	ListNode *next;
//};
//
//void josePushKill(ListNode *head,ListNode *last,int m) {
//	int count = 0;
//	while(head != last) {
//		if(++count == m) {
//			printf("%d ",head->num);
//			last->next = head->next;
//			count = 0;
//		}else{
//			last = last->next;
//		}
//		head = last->next;
//	}
//	printf("%d\n",head->num);
//}
//
//
//int main() {
//	int n,m;
//	while(scanf("%d%d",&n,&m) != EOF) {
//		if(n==1){
//			printf("1\n");
//			continue;
//		}
//		ListNode *head,*p;
//		head = (ListNode *)malloc(sizeof(ListNode));
//		head->num = 1;
//		head->next = NULL;
//		p = head;
//		for(int i=2;i<=n;++i) {
//			ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
//			temp->num = i;
//			temp->next = NULL;
//			p->next = temp;
//			p=p->next;
//		}
//		p->next = head;
//		josePushKill(head,p,m);
//
//	}
//	return 0;
//}