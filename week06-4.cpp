// week06-4.cpp 學習計畫 Simulation第1題
// LeeCode 682. Baseball Game
// 5: 陣列裡 5
// 2: 陣列裡 5 2
// C: 陣列裡 5 (刪掉了最後的2)
// D: 陣列裡 5 10(把最後的5, 變成兩倍,塞入)
// +: 陣列裡 5 10 15 (最後兩個數 5+10變15,塞入)
// 答案是,把所有的數加起來
class Solution {
public: //week02教 string week03教vector<int>
    int calPoints(vector<string>& operations) {
        //遇到Simulation模擬,就用for迴圈,一步步做
        //week03 week04 教過 c++進階 for迴圈 for(char c : s) for(int num : a)
         vector<int> a; //迴圈前面 伸縮自如的 c++陣列
         for (string s :operations){ //大量資料結構vector裡,裝小資料結構string
            if (s=="C") {
                a.pop_back();
            } else if (s=="D"){
                a.push_back(a[a.size()-1] * 2);
            }else if (s=="+"){
                a.push_back(a[a.size()-2] + a[a.size()-1]);
            }else { //剩下的,就是單純放入數字(可能是很多位數字)
             //google: c++ string  to int
             //有三種方法,可以把string 變int整數
             //a.push_back(stoi(s));
             //a.push_back(atoi(s.c_str())); //方法2 atoi(s.c_str())轉成傳統c語言的方法
             //方法3 上周教過的 stringstream 字串變串流,再流到答案裡
             int now;
             stringstream ss(s);
             ss >> now;
             a.push_back(now);


            }



        }
        int ans = 0;  //迴圈前面 ans是0
        for (int num : a){
             ans += num; //迴圈中間ans慢慢加
        }
        return ans; //迴圈後面ans拿來用
    }
};
