//#include <stdio.h>
//#include <malloc.h>
//#include <string.h>
//
//
//
//struct ListNode {
//	int num;
//	ListNode *pNext;
//};
//
//
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		ListNode *head,*p,*q,*r;
//		head = (ListNode *)malloc(sizeof(ListNode));
//		head->pNext = NULL;
//		p = head;
//		for(int i=0;i<n;++i) {
//			ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
//			scanf("%d",&temp->num);
//			if(p == head || p->num <= temp->num){
//				p->pNext = temp;
//				p = temp;
//			}else if(head->pNext->num >= temp->num){
//				temp->pNext = head->pNext;
//				head->pNext = temp;
//			}else {
//				for( r = head->pNext;r->num <= temp->num;r = r->pNext){
//					q = r;
//				}
//				q->pNext = temp;
//				temp ->pNext = r;
//			}
//		}
//		p->pNext = NULL;
//		while(head->pNext->pNext != NULL) {
//			printf("%d ",head->pNext->num);
//			head = head->pNext;
//		}
//		printf("%d",head->pNext->num);
//		printf("\n");
//
//		
//		
//	}
//
//
//
//
//
//
//	return 0;
//}