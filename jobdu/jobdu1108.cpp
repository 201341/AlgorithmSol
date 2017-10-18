//#include <stdio.h>
//
//#include <stack>
//
//using namespace std;
//
//
//int main() {
//	int n,temp;
//	char ch[10];
//	stack<int> st;
//	while(scanf("%d",&n) != EOF){
//		if( n==0 ) break;
//		while(st.empty() != true){
//			st.pop();
//		}
//		for(int i=0;i<n;++i){
//			getchar();
//			scanf("%s",&ch);
//			if(ch[0] == 'P'){
//				scanf("%d",&temp);
//				st.push(temp);
//			}else if(ch[0] == 'O' && !st.empty()){
//				st.pop();
//			}else if( ch[0] == 'A'){
//				temp = st.size();
//				if(temp == 0){
//					printf("E\n");
//				}else{
//					printf("%d\n",st.top());
//				}
//			}
//		}
//		printf("\n");
//	}
//
//
//
//
//	return 0;
//}