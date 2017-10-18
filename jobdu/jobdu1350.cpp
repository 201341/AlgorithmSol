//#include <stdio.h>
//
//struct Node {
//	Node *lchild;
//	Node *rchild;
//	int c;
//}Tree[100];
//int loc;
//Node *create() {
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//
//void buildTree(int a,int b,int i) {
//	Node *T = &Tree[i-1];
//	if( a != -1){
//		Node *temp = create();
//		temp->c = a;
//		T->lchild = temp;
//	}else{
//		T->lchild = NULL;
//	}
//	if( b!= -1) {
//		Node *temp = create();
//		temp->c = b;
//		T->rchild = temp;
//	}else{
//		T->rchild = NULL;
//	}
//}
//
//int depth(Node *root){
//	if(root == NULL){
//		return 0;
//	}
//	int left = depth(root->lchild);
//	int right = depth(root->rchild);
//	return left<right?right+1:left+1;
//}
//
//int main() {
//	int n;
//	while(scanf("%d",&n) != EOF) {
//		if(n<=0) {
//			printf("0\n");
//			break;
//		}
//		loc = 0;
//		Node *T = create();
//		T->c = 1;
//		int a,b;
//		for(int i=1;i<=n;++i) {
//			scanf("%d%d",&a,&b);
//			buildTree(a,b,i);
//		}
//		int ans = depth(T);
//		printf("%d\n",ans);
//	}
//
//	return 0;
//}