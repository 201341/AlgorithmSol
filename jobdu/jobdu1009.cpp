//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//struct Node{
//	Node *lchild;
//	Node *rchild;
//	int c;
//}Tree[110];
//
//int loc;
//vector<string> res;
//Node *createTree(){
//	Tree[loc].lchild=Tree[loc].rchild=NULL;
//	return &Tree[loc++];
//}
//
//Node* Insert(Node *T,int x){
//	if(T==NULL) {
//		T=createTree();
//		T->c = x;
//		return T;
//	}else if(x>T->c) {
//		T->rchild = Insert(T->rchild,x);
//	}else if(x<T->c) {
//		T->lchild = Insert(T->lchild,x);
//	}
//	return T;
//}
//
//void postOrder(Node *T,string &str){
//	if(T == NULL){
//		return;
//	}
//	postOrder(T->lchild,str);
//	postOrder(T->rchild,str);
//	str.insert(str.end(),T->c+'0');
//}
//void inOrder(Node *T,string &str){
//	if(T==NULL){
//		return;
//	}
//	inOrder(T->lchild,str);
//	str.insert(str.end(),T->c+'0');
//	inOrder(T->rchild,str);
//}
//
//
//int main() {
//	int n;
//	string tmp,str;
//	while(cin>>n ){
//		if(n==0) break;
//		res.clear();
//		loc = 0;
//		Node *T = NULL;
//		cin>>tmp;
//		for(int i=0;i<tmp.length();++i){
//			T=Insert(T,tmp[i]-'0');
//		}
//		postOrder(T,str);
//		inOrder(T,str);
//		while(n-- != 0){
//			cin>>tmp;
//			Node *T2 = NULL;
//			string str2;
//			for(int i=0;i<tmp.length();++i){
//				T2 = Insert(T2,tmp[i]-'0');
//			}
//			postOrder(T2,str2);
//			inOrder(T2,str2);
//			if(str2 == str){
//				cout<<"YES"<<endl;
//			}else{
//				cout<<"NO"<<endl;
//			}
//		}
//	}
//
//	return 0;
//}