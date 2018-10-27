/**
 * Using the next_permutation function from <algorithm>
 *
 * https://www.geeksforgeeks.org/stdnext_permutation-prev_permutation-c/
 *
 * ---
 *
 * Can be used to solve questions that demand the next lexicographic permutation:
 *
 * Like: https://www.geeksforgeeks.org/find-next-greater-number-set-digits/
 *
 */

#include <bits/stdc++.h>
using namespace std;

#define all(x) begin(x), end(x)

void print_next_perm(string s) {

    if (is_sorted(all(s), std::greater<char>())) {
        cout << "Not Possible" << endl;
    }
    else {
        next_permutation(all(s));
        cout << s << endl;
    }

}


void print_all_perms(string s) {

    // Get lexicographically smallest permutation
    sort(all(s));

    do {

        cout << s << endl;

    } while(next_permutation(all(s)));

}


int main() {

    // https://www.geeksforgeeks.org/find-next-greater-number-set-digits/
    print_next_perm("218765");
    print_next_perm("1234");
    print_next_perm("4321");
    print_next_perm("534976");

    // print_all_perms("abc");

    return 0;
}
