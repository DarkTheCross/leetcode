#include "Solution.h"
using namespace std;

int main(){
    Solution s;
    vector<vector<int>> mat {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    cout<<s.searchMatrix(mat, 5)<<endl;
    cout<<s.searchMatrix(mat, 30)<<endl;
    cout<<s.searchMatrix(mat, 20)<<endl;
    return 0;
}
