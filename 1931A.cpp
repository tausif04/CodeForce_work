
#include <iostream>

using namespace std;

string find_smallest_word(int encoded_sum) {
    char first_letter = 'a';
    char second_letter = 'a';
    char third_letter = 'a';

    int remaining_sum = encoded_sum - (first_letter - 'a' + 1);
    if (remaining_sum == 0) {
        return string(1, first_letter) + second_letter + third_letter;
    }

    for (char second_ord = 'a'; second_ord <= 'z'; ++second_ord) {
        second_letter = second_ord;

        remaining_sum = encoded_sum - (first_letter - 'a' + 1 + second_letter - 'a' + 1);

        if (remaining_sum > 0 && remaining_sum <= 26) {
            third_letter = 'a' + remaining_sum - 1;
            return string(1, first_letter) + second_letter + third_letter;
        }
    }

    return "";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int encoded_sum;
        cin >> encoded_sum;
        
        cout << find_smallest_word(encoded_sum) << endl;
    }

    return 0;
}