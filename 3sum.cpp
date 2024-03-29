#include<iostream>
using namespace std;

//codestudio code
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>> ans;
    if(arr.size() <= 2){
        return ans;
    }
        
    //sort array
    sort(arr.begin(), arr.end());

    for(int i = 0; i < arr.size() - 2; i++){
        if(i == 0 || (i > 0 && arr[i] != arr[i - 1])){
            int low = i + 1, high = arr.size() - 1, sum = K - arr[i];

            while(low < high){
                if(arr[low] + arr[high] == sum){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[low]);
                    temp.push_back(arr[high]);
                    ans.push_back(temp);

                    //check for is same values
                    while(low < high && arr[low] == arr[low + 1]){
                        low++;
                    }

                    while(low < high && arr[high] == arr[high - 1]){
                        high--;
                    }
                    low++;
                    high--;
                }else if(arr[low] + arr[high] < sum) {
                    low++;
                }else{
                    high--;
                }
            }
        }
    }
    return ans;
}//codestudio code

int main()
{
    
    return 0;
}