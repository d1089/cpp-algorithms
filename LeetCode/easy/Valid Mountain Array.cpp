
/***********
https://leetcode.com/explore/challenge/card/december-leetcoding-challenge/570/week-2-december-8th-december-14th/3561/
*************/
class Solution {
public:
    Solution() {
		ios_base::sync_with_stdio(false); cin.tie(NULL);
	}
    bool validMountainArray(vector<int>& arr) {
        bool up=false;
        bool down = false;
        
        if(arr.size()<3)
            return false;
        for(int i = 0; i<arr.size()-1; i++){
            
            if(arr[i] == arr[i+1])
                return false;
            
            if(arr[i] < arr[i+1]){
                if(!down)
                    up = true;
                else 
                    return false;
            }
        
            else{
                if(up)
                    down = true;
                else 
                    return false;
            }   
        }
        
        return up&&down;
    }
};
