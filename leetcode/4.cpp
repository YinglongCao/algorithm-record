#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

    int z = (nums1.size() + nums2.size()) / 2 + 1;
    int i = 0;
    int a = 0;
    int b = 0;

    if (nums1.size() == 0 && nums2.size() == 0) {
        return 0.0;
    }
    if (nums1.size() == 0 || nums2.size() == 0) {
        vector<int> *tmp;
        if (nums1.size() == 0) {
            tmp = &nums2;
        } else {
            tmp = &nums1;
        }
        vector<int> &nums = *tmp;
        if (nums.size() % 2 == 1) {
            return (double)nums[z - 1];
        } else {
            return ((double)nums[z - 1] + (double)nums[z - 2]) / 2;
        }
    }

    double re = 0.0, pre = 0.0;
    while (i < z) {
        pre = re;
        if (a == nums1.size()) {
            re = (double)nums2[b];
            b++;
            i++;
            continue;
        } else if (b == nums2.size()) {
            re = (double)nums1[a];
            a++;
            i++;
            continue;
        }
        if (nums1[a] < nums2[b]) {
            re = (double)nums1[a];
            a++;
        } else {
            re = (double)nums2[b];
            b++;
        }
        i++;
    }
    if ((nums1.size() + nums2.size()) % 2 == 1) {
        return re;
    } else {
        return (pre + re) / 2;
    }
}

int main() {
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    printf("%lf\n", findMedianSortedArrays(nums1, nums2));

    return 0;
}