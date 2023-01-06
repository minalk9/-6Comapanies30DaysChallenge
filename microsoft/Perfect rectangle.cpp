class Solution {
 public:
  bool isRectangleCover(vector<vector<int>>& rectangles) {
    int n = rectangles.size();

    if (n == 1) return true;

    
    map<pair<int, int>, int> Counts;

    for (auto& rect : rectangles) {
      Counts[{rect[0], rect[1]}]++;
      Counts[{rect[2], rect[3]}]++;
      Counts[{rect[0], rect[3]}]--;
      Counts[{rect[2], rect[1]}]--;
    }

    int numMarks = 0;

    for (auto it = Counts.begin(); it != Counts.end(); it++) {
      if (it->second != 0) {
        if (abs(it->second) != 1) return false;

        numMarks++;
      }
    }

    return numMarks == 4;
  }
};