int longestSubarrayWithSumK(vector<int> a, long long k) {
    int maxLength = 0;
    long long sum = 0;
    int start = 0;

    for (int end = 0; end < a.size(); ++end) {
        sum += a[end];

        while (sum > k) {
            sum -= a[start];
            start++;
        }

        if (sum == k) {
            maxLength = max(maxLength, end - start + 1);
        }
    }

    return maxLength;
}
