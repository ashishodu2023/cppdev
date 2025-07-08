#include <iostream>

int main() {
    int currval = 0, val = 0;

    if (std::cin >> currval) {  // Read the first value
        int count = 1;

        while (std::cin >> val) {
            if (val == currval) {
                ++count;
            } else {
                std::cout << currval << " occurs " << count << " times" << std::endl;
                currval = val;
                count = 1;
            }
        }

        // Print the count for the last value
        std::cout << currval << " occurs " << count << " times" << std::endl;
    }

    return 0;
}
