// 思路
// 1.return {celsius+273.15,celsius* 1.80 + 32.00};//开氏度 = 摄氏度 + 273.15 华氏度 = 摄氏度 * 1.80 + 32.00
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/convert-the-temperature/solutions/3825189/2469-wen-du-zhuan-huan-by-stellarvibes-iotc/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {celsius+273.15,celsius* 1.80 + 32.00};//开氏度 = 摄氏度 + 273.15 华氏度 = 摄氏度 * 1.80 + 32.00
    }
};