#include <iostream>
#include <cmath>
using namespace std;

int maxWater(int height[], int n);

int main(){
    int height[9] = {1,8,6,2,5,4,8,3,7};

    cout << maxWater(height, 9) << endl;

    return 0;
}

int maxWater(int height[], int n){
    int m = 0;

    for(int left=0; left<n-1; left++){
        for(int right=left+1; right<n; right++){
            int h = min(height[left], height[right]);
            int w = right-left;
            m = max(m, h*w);
        }
    }

    return m;
}