class Solution 
{
public:
    void _hanota(vector<int>& a, vector<int>& b, vector<int>& c, int n)
    {
        if (n == 1)
        {
            c.push_back(a.back());
            a.pop_back();
            return ;
        }
        _hanota(a, c, b, n - 1);
        c.push_back(a.back());
        a.pop_back();
        _hanota(b, a, c, n - 1);
    }
    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) 
    {
        //1. 拆分成多个相同的子问题 -> 函数头
        //2. 明白一个子问题如何解决 -> 函数体
        //3. 不要无限递归 -> 设置递归出口
        _hanota(A, B, C, A.size());
    }
};