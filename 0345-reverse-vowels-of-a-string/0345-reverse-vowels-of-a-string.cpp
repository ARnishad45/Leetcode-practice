class Solution {
public:
   bool isvowel(char ch) {
    if (ch == 'a' || ch == 'A') {
        return true;
    } else if (ch == 'e' || ch == 'E') {
        return true;
    } else if (ch == 'i' || ch == 'I') {
        return true;
    } else if (ch == 'o' || ch == 'O') {
        return true;
    } else if (ch == 'u' || ch == 'U') {
        return true;
    } else {
        return false;
    }
}

    string reverseVowels(string s) {
    char arr[s.size() + 1]; // +1 for null terminator
    strcpy(arr, s.c_str());
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        char chl = arr[left];
        char chr = arr[right];

        if (isvowel(chl) && isvowel(chr)) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        } else if (isvowel(chl)) {
            right--;
        } else if (isvowel(chr)) {
            left++;
        } else {
            left++;
            right--;
        }
    }
    return string(arr);
  }
};