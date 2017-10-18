//#include <iostream>
//#include <string>
//
//
//
//using namespace std;
//
//struct Node{
//	Node *lchild;
//	Node *rchild;
//	char c;
//}Tree[50];
//int loc;
//
//Node *createTree(){
//	Tree[loc].lchild = Tree[loc].rchild = NULL;
//	return &Tree[loc++];
//}
//
//void postOrder(Node *T){
//	if(T->lchild != NULL){
//		postOrder(T->lchild);
//	}
//	if(T->rchild != NULL){
//		postOrder(T->rchild);
//	}
//	cout<<T->c;
//}
//
//Node *build(string &str1,int s1,int e1,string &str2,int s2,int e2) {
//	Node *ret = createTree();
//	ret->c = str1[s1];
//	int rootIdx;
//	for(int i=s2;i<=e2;++i){
//		if(str2[i] == str1[s1]){
//			rootIdx = i;
//			break;
//		}
//	}
//	if(rootIdx != s2) {
//		ret->lchild = build(str1,s1+1,s1+(rootIdx-s2),str2,s2,rootIdx-1);
//	}
//	if(rootIdx != e2){
//		ret->rchild = build(str1,s1+(rootIdx-s2)+1,e1,str2,rootIdx+1,e2);
//	}
//	return ret;
//
//}
//
//
//int main() {
//	string str1,str2;
//	while(cin>>str1>>str2){
//		loc = 0;
//		int len1 = str1.length()-1;
//		int len2 = str2.length()-1;
//		Node *T = build(str1,0,len1,str2,0,len2);
//		postOrder(T);
//		cout<<endl;
//	}
//	return 0;
//}