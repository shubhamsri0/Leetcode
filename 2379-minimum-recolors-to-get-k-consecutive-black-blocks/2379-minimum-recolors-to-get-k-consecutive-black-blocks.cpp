class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int i = 0, j = 0, count = 0;
        int min_count = INT_MAX;

        // First, count the 'W's in the first window
        while (j < k) {
            if (blocks[j] == 'W') {
                count++;
            }
            j++;
        }

        min_count = count;

        // Now, slide the window across the rest of the string
        while (j < blocks.size()) {
            if (blocks[i] == 'W') {
                count--;
            }
            if (blocks[j] == 'W') {
                count++;
            }
            min_count = min(min_count, count);
            i++;
            j++;
        }

        return min_count;
    }
};
