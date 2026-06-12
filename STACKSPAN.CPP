#include <iostream>
#include <vector>
using namespace std;

vector<int> calculateSpan(vector<int>& arr) {

    int n = arr.size(); 
    vector<int> span(n, 1);
    
    // Calculate span for each day
    for (int i = 1; i < n; i++) {
        
        // Traverse left while the next element
        // on the left is smaller than arr[i]
        for (int j = i - 1; (j >= 0)
                      && (arr[i] >= arr[j]); j--) {
            span[i]++;
        }
    }

    return span;
}


int main() {
  
    vector<int> arr = {10, 4, 5, 90, 120, 80};
    vector<int> span = calculateSpan(arr);
    for (int x : span) {
        cout << x << " ";
    }
    return 0;
}