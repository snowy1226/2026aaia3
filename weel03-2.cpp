//week03-2.cpp 學習計畫 basic第六題
//LeeCode 283. move zeros
//把0移到右邊,等於「不是0的放左邊」再補0
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k = 0;   //目標放在哪裡nums[k]
        for (int num : nums){   //用c++進階for圈
            if (num != 0) {   //把不是0的都移到左邊
              nums[k] = num;  //把數字放左邊
                k++;  //換下一格
            }


        }
        //把殘留的都變成0
        for (int i = k; i < nums.size(); i++){
            nums[i] = 0;
        }


    }
};
