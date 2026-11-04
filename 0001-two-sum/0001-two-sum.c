/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
   int* result = (int*)malloc(2 * sizeof(int));
    
    // 2. Search for the matching pair
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                // Store the indices in our result array
                result[0] = i;
                result[1] = j;
                
                // Inform LeetCode we are returning 2 elements
                *returnSize = 2;
                return result;
            }
        }
    }
    
    // Fallback if no pair is found
    *returnSize = 0;
    return NULL;

    
}