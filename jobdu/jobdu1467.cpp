//#include <stdio.h>
//
//struct Node{
//	Node *lchild;
//	Node *rchild;
//	int c;
//
//}Tree[101];
//int loc;
//
//Node *create() {
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//
//Node * Insert(Node *T,int num) {
//	Node *newNode = create();
//	newNode->c = num;
//	if(T == NULL) {
//		T = newNode;
//		printf("-1\n");
//		return T;
//	}
//	Node *p = T;
//	Node *temp = NULL;
//	while(p != NULL) {
//		temp = p;
//		if(num > p->c) {
//			p=p->rchild;
//		}else{
//			p=p->lchild;
//		}
//	}
//	printf("%d\n",temp->c);
//	if(num > temp->c) {
//		temp->rchild = newNode;
//	}else{
//		temp->lchild = newNode;
//	}
//
//	return T;
//
//
//}
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF){
//		Node *T = NULL;
//		loc = 0;
//		for(int i=0;i<n;++i) {
//			int a;
//			scanf("%d",&a);
//			T=Insert(T,a);
//		}
//	}
//	return 0;
//}