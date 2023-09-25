#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	
	int i , j;
    int* result = (int*)malloc(2 * sizeof(int)); // Tao mot mang chua ket qua
    *returnSize = 2; // Tra ve kích thuoc cua mang ket qua là 2

	
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result; // Tra ve mang ket qua neu tìm thay
            }
        }
    }

    return NULL; // Tra ve NULL neu không tìm thay cap so nào thoa mãn
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    
    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);
    
    if (result != NULL) {
        printf("Ket qua: [%d, %d]\n", result[0], result[1]);
        free(result); // Ðung quên giai phóng bo nho sau khi su dung mang ket qua
    } else {
        printf("Không tìm thay cap so nào có tong bang %d\n", target);
    }

    return 0;
}

