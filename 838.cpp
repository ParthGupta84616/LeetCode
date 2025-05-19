class Solution {
public:
    string pushDominoes(string dominoes) {
        int N = dominoes.length();
        vector<int> indexes = {-1};      // stores the indexes of non-dot characters
        vector<char> symbols = {'L'};    // stores the corresponding symbols

        // Populate indexes and symbols for non-dot characters
        for (int i = 0; i < N; ++i) {
            if (dominoes[i] != '.') {
                indexes.push_back(i);
                symbols.push_back(dominoes[i]);
            }
        }

        indexes.push_back(N);     // virtual boundary
        symbols.push_back('R');   // virtual right push

        string ans = dominoes;    // result string to modify

        for (size_t idx = 0; idx + 1 < indexes.size(); ++idx) {
            int i = indexes[idx], j = indexes[idx + 1];
            char x = symbols[idx], y = symbols[idx + 1];

            if (x == y) {
                for (int k = i + 1; k < j; ++k) {
                    ans[k] = x;
                }
            } else if (x == 'R' && y == 'L') {
                for (int k = i + 1; k < j; ++k) {
                    if (k - i == j - k)
                        ans[k] = '.';
                    else if (k - i < j - k)
                        ans[k] = 'R';
                    else
                        ans[k] = 'L';
                }
            }
            // If x == 'L' and y == 'R', do nothing (remain '.')
        }

        return ans;
    }
};
