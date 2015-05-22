#include <iostream>

using namespace std;

/**
 * 5. 가장 많이 등장한 숫자 찾기.
 * O(n2)
 */
int main() {
    int a[10] = {1, 3 , 2, 1, 2, 2, 3, 2, 2, 4};
    int maxCount = 0;
    int maxNum = 0;

    for(int i=0; i < sizeof(a)/sizeof(a[0]); i++){
        int num = a[i];
        int count = 0;

        for(int j=0; j < sizeof(a)/sizeof(a[0]); j++){
            if(num == a[j]){
                count++;
            }
        }

        if(count > maxCount){
            maxCount = count;
            maxNum = num;
        }
    }

    cout << "Max Number: " << maxNum << endl;
    cout << "Max count: " << maxCount << endl;
    return 0;
}