#include <iostream>
#include <vector>

int main() {
    int t; // number of test cases
    std::cin >> t;

    // vectors to store the inputs
    std::vector<int> n(t);
    std::vector<std::string> s(t);

    // read the inputs
    for(int i = 0; i < t; ++i) {
        std::cin >> n[i] >> s[i];
    }

    // for each test case
    for(int i = 0; i < t; ++i) {
        // array to check for the existence of each pair
        std::vector<bool> exists(49, false);

        int count = 0;

        // for each pair of notes in the melody
        for(int j = 0; j < n[i] - 1; ++j) {
            // represent the pair as an integer
            int pair = (s[i][j] - 'a') * 7 + (s[i][j+1] - 'a');
            
            // if this pair does not exist yet
            if(!exists[pair]) {
                // mark it as existing
                exists[pair] = true;
                // increment the count
                ++count;
            }
        }

        // print the count
        std::cout << count << "\n";
    }

    return 0;
}
