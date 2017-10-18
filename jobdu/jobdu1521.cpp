//#include <stdio.h>
//#include <string.h>
//struct Node {
//	Node *lchild;
//	Node *rchild;
//	int c;
//}Tree[100];
//int loc;
//int nd[1000];
//Node *create() {
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//
//void buildTree(int a,int b,int i) {
//	Node *T = &Tree[i-1];
//	if( a != -1){
//		Node *temp = create();
//		temp->c = nd[a];
//		T->lchild = temp;
//	}else{
//		T->lchild = NULL;
//	}
//	if( b!= -1) {
//		Node *temp = create();
//		temp->c = nd[b];
//		T->rchild = temp;
//	}else{
//		T->rchild = NULL;
//	}
//}
//
//
//void Mirror(Node *T){
//	if(T==NULL || (T->lchild==NULL &&T->rchild == NULL)){
//		return;
//	}
//	Mirror(T->lchild);
//	Mirror(T->rchild);
//	Node *temp = T->lchild;
//	T->lchild = T->rchild;
//	T->rchild = temp;
//
//}
//
//void preOrder(Node *T){
//	if(T == NULL){
//		return;
//	}
//	printf(" %d ",T->c);
//	preOrder(T->lchild);
//	preOrder(T->rchild);
//
//}
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		if(n<=0) {
//			printf("NULL\n");
//			continue;
//		}
//		loc = 0;
//		memset(nd,0,sizeof(nd));
//		for(int i=1;i<=n;++i){
//			scanf("%d",&nd[i]);
//		}
//
//		Node *T = create();
//		T->c = nd[1];
//		char ch;
//		int a=-1,b=-1;
//		for(int i=1;i<=n;++i) {
//			getchar();
//			scanf("%c",&ch);
//			if(ch == 'd'){
//				scanf("%d%d",&a,&b);
//			}else if(ch == 'l'){
//				scanf("%d",&a);
//				b=-1;
//			}else if(ch == 'r'){
//				a=-1;
//				scanf("%d",&b);
//			}else{
//				a=-1;
//				b=-1;
//			}
//			buildTree(a,b,i);
//		}
//		Mirror(T);
//		printf("%d",T->c);
//		preOrder(T->lchild);
//		preOrder(T->rchild);
//		printf("\n");
//	}
//
//	return 0;
//}