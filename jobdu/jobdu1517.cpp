//#include <stdio.h>
//#include <malloc.h>
//
//struct ListNode {
//	int num;
//	ListNode *pNext;
//};
//
//int NodeLen(ListNode *head){
//	int temp = 0;
//	while(head != NULL) {
//		temp++;
//		head = head->pNext;
//	}
//	return temp;
//}
//
//
//int main() {
//	
//	int n,k;
//	while(scanf("%d%d",&n,&k)!=EOF) {
//		ListNode *head,*p;
//		int len,t;
//		head = (ListNode *)malloc(sizeof(ListNode));
//		head->pNext = NULL;
//		p = head;
//		for(int i=0;i<n;++i) {
//			ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
//			scanf("%d",&temp->num);
//			temp->pNext = NULL;
//			p->pNext = temp;
//			p = p->pNext;
//		}
//		len = NodeLen(head->pNext);
//		if(k == 0) {
//			printf("NULL\n");
//		}else if( k <= len){
//			t=len-k;
//			p = head->pNext;
//			for(int i=0;i<t;++i){
//				p=p->pNext;
//			}
//			printf("%d\n",p->num);
//		}else {
//			printf("\n");
//		}
//
//	}
//
//	return 0;
//}