#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/
vector<vector<int>> finalResponse;

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    vector<vector<int>> finalResponse;

    if(intervals.size()<=1){
        return intervals;
    }

    sort(intervals.begin(),intervals.end());

    vector<int> tempInterval= intervals[0];


    for(auto it: intervals){
        if(tempInterval[1]>=it[0]){
            tempInterval[1]=max(it[1],tempInterval[1]);
        }else{
            finalResponse.push_back(tempInterval);
            tempInterval=it;
        }

        
        
    }
    finalResponse.push_back(tempInterval);
    return finalResponse;

}
