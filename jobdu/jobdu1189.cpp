//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//
//struct ListNode {
//	int num;
//	ListNode *next;
//};
//
//ListNode* josePushKill(ListNode *head,ListNode *last,int m) {
//	int count = 0;
//	while(head != last) {
//		if(++count == m) {
//			last->next = head->next;
//			count = 0;
//		}else{
//			last = last->next;
//		}
//		head = last->next;
//	}
//	return head;
//}
//
//
//int main() {
//	while(true) {
//		ListNode *head,*p;
//		head = (ListNode *)malloc(sizeof(ListNode));
//		head->num = 1;
//		head->next = NULL;
//		p = head;
//		for(int i=2;i<=21;++i) {
//			ListNode *temp = (ListNode*)malloc(sizeof(ListNode));
//			temp->num = i;
//			temp->next = NULL;
//			p->next = temp;
//			p=p->next;
//		}
//		p->next = head;
//		ListNode *q=josePushKill(head,p,17);
//		printf("%d\n",q->num);
//		break;
//
//	}
//	return 0;
//}