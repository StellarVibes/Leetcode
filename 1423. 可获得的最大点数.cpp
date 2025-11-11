// 思路
// 1.//正难则反
// 2.int size = cardPoints.size()-k,sum = 0,ret = INT_MAX,tmp = 0;//ret取最小值 int left_len = cardPoints.size()-size;
// 3.for(int left = 0,right = 0;left<=left_len&&right<cardPoints.size();)
// 4.if(size) size--; sum+=cardPoints[right];//整个cardPoints的和
//                 tmp+=cardPoints[right];//window的大小 right++;
//                 if(size==0&&ret>tmp) ret = tmp;
// 5.else size++; tmp-=cardPoints[left]; left++;
// 6.return sum-ret;
// Code

// 作者：StellarVibes
// 链接：https://leetcode.cn/problems/maximum-points-you-can-obtain-from-cards/solutions/3829018/1423-ke-huo-de-de-zui-da-dian-shu-by-ste-y6xf/
// 来源：力扣（LeetCode）
// 著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处

class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //正难则反
        int size = cardPoints.size()-k,sum = 0,ret = INT_MAX,tmp = 0;//ret取最小值
        int left_len = cardPoints.size()-size;
        for(int left = 0,right = 0;left<=left_len&&right<cardPoints.size();)
        {
            if(size)
            {
                size--;
                sum+=cardPoints[right];//整个cardPoints的和
                tmp+=cardPoints[right];//window的大小
                right++;
                if(size==0&&ret>tmp) ret = tmp;
            }
            else{
                size++;
                tmp-=cardPoints[left];
                left++;
            }
        }
        return sum-ret;
    }
};