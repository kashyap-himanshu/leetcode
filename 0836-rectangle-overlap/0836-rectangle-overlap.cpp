class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int a1=rec1[0];
        int a2=rec1[1];
        int a3=rec1[2];
        int a4=rec1[3];

        int b1=rec2[0];
        int b2=rec2[1];
        int b3=rec2[2];
        int b4=rec2[3];

        if(a1 < b3 && b1 < a3 && a2 < b4 && b2 < a4)
            return true;

        return false;
    }
};