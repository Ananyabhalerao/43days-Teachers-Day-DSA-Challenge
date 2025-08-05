//1295.Find Numbers with Even Number of Digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int count = 0;
       for (int num:nums) {
        if (to_string(abs(num)).length() %2 == 0){
            count++;
        }
        
       }
       return count;
    }
};
