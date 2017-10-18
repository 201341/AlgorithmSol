//#include <stdio.h>
//#include <malloc.h>
//struct ListNode{
//	int num;
//	ListNode *pNext;
//};
//
//ListNode *reverseList(ListNode *head){
//	ListNode *pre = NULL;
//	ListNode *next = NULL;
//	while(head != NULL) {
//		next = head->pNext;
//		head->pNext = pre;
//		pre = head;
//		head = next;
//	}
//	return pre;
//}
//
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		if( n==0 ) {
//			printf("NULL\n");
//		}else {
//			ListNode *head,*p;
//			head = (ListNode *)malloc(sizeof(ListNode));
//			head->pNext = NULL;
//			p = head;
//			for(int i=0;i<n;++i){
//				ListNode *temp = (ListNode *)malloc(sizeof(ListNode));
//				scanf("%d",&temp->num);
//				temp->pNext = NULL;
//				p->pNext = temp;
//				p=p->pNext;
//			}
//			ListNode *res =reverseList(head->pNext);
//			while(res->pNext != NULL){
//				printf("%d ",res->num);
//				res = res->pNext;
//			}
//			printf("%d\n",res->num);
//		}
//	
//	}
//
//	return 0;
//
//
//
//}