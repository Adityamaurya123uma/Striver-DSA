// Factorial of First N using recursion
 
void printFN(vector<long long> &v, long long &mul, long long n, int &count) {
    if (mul <= n) {
        v.push_back(mul);
        mul = mul * count;
        count++;
        printFN(v, mul, n, count);
    }
}

vector<long long> factorialNumbers(long long n) {
    long long mul = 1;
    int count = 2;
    vector<long long> v;
    printFN(v, mul, n, count);
    return v;
}