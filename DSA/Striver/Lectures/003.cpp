#include <vector>
#include <unordered_map>
#include <climits>

using namespace std;

vector<int> getFrequencies(vector<int>& v) {
    unordered_map<int, int> freq;
    for (int i : v)
        freq[i]++;

    int maxE = INT_MAX, minE = INT_MAX;
    int maxF = INT_MIN, minF = INT_MAX;

    for (auto it : freq) {
        int element = it.first;
        int count = it.second;

        // Update max frequency element
        if (count > maxF) {
            maxF = count;
            maxE = element;
        } else if (count == maxF && element < maxE) {
            maxE = element;
        }

        // Update min frequency element
        if (count < minF) {
            minF = count;
            minE = element;
        } else if (count == minF && element < minE) {
            minE = element;
        }
    }

    return {maxE, minE};
}
