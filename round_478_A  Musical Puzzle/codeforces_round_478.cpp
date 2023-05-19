#include <iostream>
#include <vector>
#include <set>

int main() {
    int t;
    std::cin >> t;

    std::vector<int> n(t);
    std::vector<std::string> s(t);

    for(int i = 0; i < t; ++i) {
        std::cin >> n[i] >> s[i];
    }

    for(int i = 0; i < t; ++i) {
        std::set<std::string> melodies;
        for(int j = 0; j < n[i] - 1; ++j) {
            std::string melody = s[i].substr(j, 2);
            melodies.insert(melody);
        }
        std::cout << melodies.size() << "\n";
    }

    return 0;
}
