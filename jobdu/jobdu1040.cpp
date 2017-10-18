//#include <stdio.h>
//
//
//
//int main() {
//	bool flag[200000] = {false};
//	int k;
//	for(int i=2;i<200000 ;++i){
//		if(flag[i] == true) {
//			continue;
//		}
//		for(int j=2;j*i<200000;++j) {
//			flag[j*i] = true;
//		}
//	}
//	while(scanf("%d",&k) != EOF){
//		for(int i=2;i<200000;++i){
//			if(flag[i] == false) k--;
//			if(k == 0){
//				printf("%d\n",i);
//				break;
//			}
//		}
//
//	}
//
//	return 0;
//}