//#include <stdio.h>
//#include <string.h>
//
//
//struct CountryRank{
//	int goldNum;
//	int medalNum;
//	int Population;
//}rank[200];
//
//
//int main() {
//	int n,m;
//	int index[200];
//	while(scanf("%d%d",&n,&m) !=EOF){
//		for(int i=0;i<n;++i) {
//			scanf("%d%d%d",&rank[i].goldNum,&rank[i].medalNum,&rank[i].Population);
//		}
//
//		for(int j=0;j<m;++j) {
//			scanf("%d",&index[j]);
//		}
//		for(int i=0;i<m;++i) {
//			int bestRank = m;	//最好的排名
//			int bestType = 1;  //排名方式
//			int type;
//			for(type = 1;type <=4; ++type) {
//				int prank = 1;    //每个排名方式的排名；
//				for(int j=0;j<m;j++) {
//					if(type == 1 && rank[index[i]].goldNum < rank[index[j]].goldNum) prank++;
//					else if(type == 2 && rank[index[i]].medalNum < rank[index[j]].medalNum) prank++;
//					else if(type == 3){
//						if(rank[index[i]].goldNum * rank[index[j]].Population < rank[index[j]].goldNum * rank[index[i]].Population)
//							prank++;
//					}else if(type == 4){
//						if(rank[index[i]].medalNum * rank[index[j]].Population < rank[index[j]].medalNum * rank[index[i]].Population){
//							prank++;
//						}
//					}
//				}
//				if(prank < bestRank) {
//					bestRank = prank;
//					bestType = type;
//				}
//			}
//			printf("%d:%d\n",bestRank,bestType);
//		}
//
//		printf("\n");
//
//	}
//	return 0;
//}