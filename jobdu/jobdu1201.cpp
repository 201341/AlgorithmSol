//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Node{
//	Node *lchild;
//	Node *rchild;
//	int c;
//}Tree[110];
//int loc;
//Node *createTree(){
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//Node *Insert(Node *T,int x){
//	if(T == NULL){
//		T = createTree();
//		T->c = x;
//		return T;
//	}else if(T->c > x){
//		T->lchild = Insert(T->lchild,x);
//	}else if(T->c < x){
//		T->rchild = Insert(T->rchild,x);
//	}
//
//	return T;
//}
//
//void preOrder(Node *T){
//	if(T == NULL){
//		return;
//	}
//	cout<<T->c<<" ";
//	preOrder(T->lchild);
//	preOrder(T->rchild);
//}
//
//void inOrder(Node *T){
//	if(T == NULL){
//		return;
//	}
//	inOrder(T->lchild);
//	cout<<T->c<<" ";
//	inOrder(T->rchild);
//}
//
//void postOrder(Node *T){
//	if(T == NULL){
//		return;
//	}
//	postOrder(T->lchild);
//	postOrder(T->rchild);
//	cout<<T->c<<" ";
//}
//
//
//
//int main(){
//	int n;
//	while(cin >>n){
//		loc = 0;
//		Node *T = NULL;
//		for(int i=0;i<n;++i){
//			int x;
//			cin>>x;
//			T = Insert(T,x);
//		}
//		preOrder(T);
//		cout<<endl;
//		inOrder(T);
//		cout<<endl;
//		postOrder(T);
//		cout<<endl;
//	}
//
//
//	return 0;
//}