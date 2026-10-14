//week06-.cpp學習計畫 Simulaion 第2題
//Leecode 657.Robot Return to Origin
//機器人往上U 往下D 往左L 往右R,問是否會回到原來位置
class Solution {
public:
    bool judgeCircle(string moves) {
        //程式在中間,上面三行不要動,下面兩行不要動
        int x = 0, y = 0;
        for (char c : moves){  //week02教string及c++進階for迴圈
        if (c=='U') y++; //往上
        if (c=='D') y--; //往下
        if (c=='L') x--; //往左
        if (c=='R') x++; //往右
        }
        if (x==0 && y ==0) return true;
        else return false;


        //return true;
    }
};
