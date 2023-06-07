#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n = prices.size();

    vector<int> minArray(n);
    vector<int> maxArray(n);

    int minEle = INT_MAX;
    for(int i=0;i<n;i++){
        minEle= min(minEle,prices[i]);

        minArray[i]=minEle;
    }

    int maxEle = INT_MIN;
    for(int i=n-1;i>=0;i--){
        maxEle= max(maxEle,prices[i]);

        maxArray[i]=maxEle;
    }


    int maxProfit= INT_MIN;

    for(int i=0;i<n;i++){
        maxProfit= max(maxProfit,maxArray[i]-minArray[i]);
    }
    return maxProfit;
}
    
