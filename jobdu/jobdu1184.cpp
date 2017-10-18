//#include <stdio.h>
//#include <string.h>
//
//struct Node{
//	Node *left;
//	Node *right;
//	char c;
//
//}Tree[101];
//int loc,current;
//Node *creat() {
//	Tree[loc].left=Tree[loc].right=NULL;
//	return &Tree[loc++];
//}
//
//Node *createTree(char *str) {
//	if(current == strlen(str)) return NULL;
//	Node *temp = creat();
//	if(str[current] != '#') {
//		temp->c = str[current];
//		current++;
//	}else{
//		current++;
//		return NULL;
//	}
//	temp->left = createTree(str);
//	temp->right = createTree(str);
//	return temp;
//}
//
//void inOrder(Node * root) {
//	if(root == NULL) {
//		return ;
//	}
//	inOrder(root->left);
//	printf("%c ",root->c);
//	inOrder(root->right);
//
//}
//
//int main() {
//	char str[101];
//
//	while(scanf("%s",str) != EOF) {
//		loc = 0;
//		current = 0;
//		Node *root = createTree(str);
//		inOrder(root);
//		printf("\n");
//	}
//
//
//	return 0;
//}