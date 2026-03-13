6. Write a function that combines two arrays by alternatingly taking elements, e.g. [a,b,c], [1,2,3] → [a,1,b,2,c,3].
Solution : 
#CPP
vector<int> mergeArr(int arr1[],int arr2[],int m,int n){
	vector<int> ans(m+n);
	int a1=0;
	int a2=0;
	for(int i=0;i<(m+n);i++){
		if(i%2==0){
			ans.push_back(arr1[a1];
			a1++;
		}else{
			ans.push_back(arr2[a2]);
			a2++;
		}
	}
	return ans;
}
