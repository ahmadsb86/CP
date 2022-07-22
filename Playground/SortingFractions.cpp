#include "/Users/user/stdc++.h"

int main() {
  std::vector<float> nums;
  nums.push_back(0.5);
  nums.push_back(0.7);
  nums.push_back(0.333333334);
  nums.push_back(0.1);
  nums.push_back(1.4989);
  std::sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size(); i++) {
    std::cout << nums[i] << '\n';
  }
  return 0;


}
