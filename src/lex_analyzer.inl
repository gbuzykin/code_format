// Lexegen autogenerated analyzer file - do not edit!

static int symb2meta[256] = {
    -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 3, 4, 0, 0,
    0, 5, 0, 0, 6, 7, 0, 7, 8, 9, 10, 11, 11, 11, 11, 11, 11, 11, 11, 11, 0, 0, 0, 0, 0, 0, 0, 12, 12, 12, 12, 13, 12,
    14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 14, 14, 0, 16, 0, 0, 14, 0, 12, 12, 12, 12,
    13, 12, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 15, 14, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0
};

static int def[49] = {
    -1, 0, 1, 1, -1, 2, 2, 2, 2, 1, 9, 2, -1, 12, 12, 12, 13, 13, -1, 7, 7, -1, 19, -1, 1, -1, 23, 5, 5, 27, 0, -1, 27,
    23, 19, -1, -1, -1, 37, -1, 30, 35, -1, 42, 43, -1, 45, 36, 47
};

static int base[49] = {
    0, 17, 33, 36, 42, 55, 71, 82, 13, 99, 46, 114, 131, 148, 37, 163, 38, 111, 48, 177, 192, 48, 113, 197, 214, 64,
    231, 248, 202, 262, 276, 48, 48, 48, 48, 40, 113, 113, 33, 160, 53, 40, 196, 47, 80, 256, 80, 293, 300
};

static int next[317] = {
    31, 4, 4, 32, 33, 34, 31, 31, 35, 36, 37, 38, 39, 39, 39, 39, 40, 2, 3, 12, 5, 6, 7, 2, 2, 2, 8, 2, 2, 2, 2, 2, 2,
    9, 2, -1, 2, 2, 2, 2, 2, 2, 2, 4, 4, 2, 2, 18, -1, 11, 41, 41, 10, 42, -1, 5, 5, 27, 30, 5, 5, 5, 5, 5, 5, 5, 5, 5,
    5, 5, 5, 28, 6, 23, 25, 25, 25, 25, 25, 25, 2, 2, 7, 7, 19, 7, 7, 24, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 20, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 13, 19, 13, 2, 41, 47, 38, 38, 2, 42, 13, 45, 19, 2, 12, 12, 13, 12, 12,
    12, 14, 12, 12, 12, 12, 12, 12, 12, 12, 12, 15, 13, 13, 13, 13, 13, 13, 16, 13, 13, 13, 13, 13, 13, 13, 13, 13, 17,
    12, 12, 12, 12, 12, 39, 39, 39, 39, 39, 39, 12, 19, 19, 12, 19, 19, 21, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 22,
    7, 7, 7, 7, 23, 23, 7, 7, 7, 43, 5, 5, 44, 44, 7, 25, 25, 25, 25, 26, 6, 6, 6, 6, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    6, 6, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 23, 27, 27, 27, 21, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 29, 27, 46, 46, 46, 46, 27, 27, 27, 27, 27, 27, 4, 27, 27, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 47, 47, -1, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 47, 48, 47, 47, 47, 47, 47, 47, 47
};

static int check[317] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 8, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2,
    3, 3, 3, 2, 4, 4, 3, 14, 16, 38, 2, 35, 35, 3, 41, 43, 5, 5, 5, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 6, 25,
    25, 25, 25, 25, 25, 6, 6, 7, 7, 7, 7, 7, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9,
    9, 9, 9, 9, 11, 17, 22, 36, 11, 37, 36, 37, 37, 11, 37, 17, 37, 22, 11, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12,
    12, 12, 12, 12, 12, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 15, 15, 15, 15, 15, 39,
    39, 39, 39, 39, 39, 15, 19, 19, 15, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 23, 23,
    20, 20, 20, 42, 28, 28, 42, 42, 20, 23, 23, 23, 23, 23, 24, 24, 24, 24, 28, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24,
    24, 24, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 27, 27, 27, 27, 27, 27, 27, 27, 27, 27,
    27, 27, 27, 27, 27, 27, 27, 29, 45, 45, 45, 45, 29, 29, 29, 29, 29, 29, 30, 29, 29, 30, 30, 30, 30, 30, 30, 30, 30,
    30, 30, 30, 30, 30, 30, 47, 47, 47, 47, 47, 47, 47, 47, 47, 48, 47, 47, 47, 47, 47, 47, 47, 48, 48, 48, 48, 48, 48,
    48
};

static int accept[49] = {
    0, 2, 2, 2, 16, 2, 2, 2, 2, 18, 0, 0, 2, 0, 2, 0, 0, 0, 4, 0, 0, 8, 0, 0, 0, 6, 0, 0, 0, 0, 0, 18, 18, 18, 18, 18,
    18, 12, 12, 10, 18, 14, 0, 0, 14, 0, 12, 4, 0
};

static int lls_idx[50] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

static int lls_list[1] = { 0 };

int lex(const char* first, const char* last, std::vector<int>& state_stack, unsigned& llen, bool has_more) {
    assert(first <= last && last - first >= llen);
    enum { kTrailContFlag = 1, kFlagCount = 1 };
    int state = state_stack.back();
    const char* p = first + llen;
    while (true) {  // Fill buffers till transition is impossible
        if (p == last) {
            if (!has_more) { break; }
            llen = static_cast<unsigned>(p - first);
            return err_end_of_input;
        }
        int meta = symb2meta[static_cast<unsigned char>(*p)];
        if (meta < 0) { break; }
        do {
            int l = base[state] + meta;
            if (check[l] == state) {
                state = next[l];
                break;
            }
            state = def[state];
        } while (state >= 0);
        if (state < 0) { break; }
        state_stack.push_back(state);
        ++p;
    }
    while (p != first) {  // Unroll downto last accepting state
        int n_pat = accept[state_stack.back()];
        if (n_pat > 0) {
            bool has_trailling_context = n_pat & kTrailContFlag;
            n_pat >>= kFlagCount;
            if (has_trailling_context) {
                do {
                    state = state_stack.back();
                    for (int i = lls_idx[state]; i < lls_idx[state + 1]; ++i) {
                        if (lls_list[i] == n_pat) { goto accept_pat; }
                    }
                    --p;
                    state_stack.pop_back();
                } while (p != first);
            }
        accept_pat:
            llen = static_cast<unsigned>(p - first);
            state_stack.erase(state_stack.end() - llen, state_stack.end());
            return n_pat;
        }
        --p;
        state_stack.pop_back();
    }
    if (p == last) { return err_end_of_input; }
    ++p, llen = 1;  // Accept at least one symbol as default pattern
    return predef_pat_default;
}
