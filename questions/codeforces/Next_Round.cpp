#include <iostream>
#include <vector>

using namespace std;

int count_advancing_participants(int n, int k, const vector<int>& scores) {
    // Determine the score of the k-th place finisher
    int kth_score = scores[k-1];
    
    // Count participants with scores >= kth_score and > 0
    int count = 0;
    for (int score : scores) {
        if (score >= kth_score && score > 0) {
            count++;
        }
    }
    
    return count;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> scores(n);
    for (int i = 0; i < n; ++i) {
        cin >> scores[i];
    }
    
    int result = count_advancing_participants(n, k, scores);
    
    cout << result << endl;
    
    return 0;
}
