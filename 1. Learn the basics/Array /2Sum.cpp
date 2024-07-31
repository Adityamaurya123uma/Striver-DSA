// Better approach when you want to return only string "YES" / "NO"
// Optimal approach when you want to return the index

vector<int> twoSum(vector<int>& nums, int target) {
  map<int, int> mpp;
  int n = nums.size();
  for(int i=0;i<n;i++){
    int num = nums[i];
    int moreNeeded = target - num;
    if(mpp.find(moreNeeded) != mpp.end()) {
      return (mpp[moreNeeded], i); // return "YES";
    }
      mpp[num] = i;
  }
  return (-1,-1); // return "NO";
}

// Optimal Solution when you want to return String "YES"/"NO"

string read(int n, vector<int> book, int target){
  int left = 0, right = n-1;
  sort(book.begin(), book.end());
  while(left < right) {
    int sum = book[left] + book[right];
    if(sum == target) {
      return "YES";
    } else if(sum < target) {
      left++;
    } else {
      right++;
  }
  return "NO";
}
