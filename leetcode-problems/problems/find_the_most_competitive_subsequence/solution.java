class Solution {
    public int[] mostCompetitive(int[] nums, int k) {
        int[] result = new int[k];
        int idx = 0, remaining = nums.length - k;

        for (int i = 0; i < nums.length; i++) {

            while (idx > 0 && result[idx - 1] > nums[i] && remaining > 0) {
                idx--;
                remaining--;
            }

            if (idx < result.length ) {
                result[idx++] = nums[i];
            } else {
                remaining--;
            }
        }

        return result;
    }
}