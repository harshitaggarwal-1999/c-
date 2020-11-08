int binarySearch(int *input, int n, int val)
{
    int start = 0;
    int end = n-1;
    int mid = 0;
    while(true) {
        mid = (start + end)/2;
        if (start > end) {
                return -1;
            }
        if (input[mid] == val) {
            return mid;
        }else{
            if (val > input[mid]) {
                start=mid+1;
                continue;
            }else if (val < input[mid]) {
                end = mid - 1;
                continue;
            }
        }
    }
}
