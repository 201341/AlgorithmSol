//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//DFS
//
//int a[100];
//vector<vector<int>> ans;
//int min(int a,int b) {
//	return a<b?a:b;
//}
//
//void DFS(vector<int> path,int target,int index,int n){
//	if(target == 0) {
//		ans.push_back(path);
//	}
//	if(target < 0 || index >= n) {
//		return;
//	}
//	for(int i=index;i<n && target >= a[i];++i) {
//		path.push_back(a[i]);
//		DFS(path,target-a[i],i+1,n);
//		path.pop_back();
//	}
//}
//
//int  findSize() {
//	if(ans.size() == 0) {
//		return 0;
//	}
//	int num = ans[0].size();
//	for(int i=1;i<ans.size();++i) {
//		num = min(num,ans[i].size());
//	}
//	return num;
//}
//
//
//int main() {
//	int m,n;
//	while(scanf("%d",&m) != EOF) {
//		while(ans.empty() != true) {
//			ans.pop_back();
//		}
//		vector<int> path;
//		scanf("%d",&n);
//		for(int i=0;i<n;++i) {
//			scanf("%d",&a[i]);
//		}
//		sort(a,a+n);
//		DFS(path,m,0,n);
//		int res = findSize();
//		printf("%d\n",res);
//	}
//	return 0;
//}