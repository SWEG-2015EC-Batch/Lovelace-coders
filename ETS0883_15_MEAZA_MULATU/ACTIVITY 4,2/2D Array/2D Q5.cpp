
#include <iostream>
#include <vector>

int countFriendPairs(const std::vector<std::vector<int>>& friendships) {
    int count = 0;
    for (size_t i = 0; i < friendships.size(); ++i) {
        for (size_t j = i + 1; j < friendships[i].size(); ++j) {
            if (friendships[i][j] == 1) {
                for (size_t k = j + 1; k < friendships[i].size(); ++k) {
                    if (friendships[i][k] == 1 && friendships[j][k] == 1) {
                        count++;
                    }
                }
            }
        }
    }
    return count;
}

int main() {
    std::vector<std::vector<int>> friendships = {
        {0, 1, 1, 0, 1},
        {1, 0, 1, 1, 0},
        {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {1, 0, 1, 0, 0}
    };

    int numFriendPairs = countFriendPairs(friendships);
    std::cout << "Number of friend pairs: " << numFriendPairs << std::endl;

    return 0;
}


