// Sorting to new array algorithm without duplications
int sort_without_reps(int *src, int n, int *dest) {
    int i;

    if (n != 0) {
        int j, temp;
        int counter = 0;

        // Order src array
        for (i = 0; i < n - 1; ++i) {
            for (j = 0; j < n - i - 1; ++j) {
                if (*(src + j) > *(src + (j + 1))) {
                    temp = *(src + j);
                    *(src + j) = *(src + (j + 1));
                    *(src + (j + 1)) = temp;
                }
            }
        }

        // Copy to dest array without duplicates
        for (i = 0; i < n - 1; ++i) {
            if (*(src + i) != *(src + (i + 1))) { // Skip position if next position is a duplicate
                *(dest + counter) = *(src + i);
                ++counter;
            }
        }
        *(dest + counter) = *(src + (n - 1)); // Always copy last position
        ++counter;

        return counter;
    }

    return 0;
}