void copy_vec(int *vec1, int *vec2, int n) {
    int i;
    for (i = 0; i < n; ++i) { // cycle through array positions
        *(vec2 + i) = *(vec1 + i); // copy one array value to another array
    }
}
