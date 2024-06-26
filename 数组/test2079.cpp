#include <vector>
using namespace std;

class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int index = 0;
        int sum = 0;
        int max = capacity;
        for (int i = 0; i < plants.size(); ) {
            if (capacity >= plants[i]) {
                capacity -= plants[i];
                index++;
                sum++;
                i++;
            } else {
                capacity = max;
                sum = sum + (index * 2);
            }
        }
        return sum;
    }
};

