import java.util.*;

public class MaxLengthSubArrayUsingHashMapXX
{

    public static int longestSubarrayWithSumK(int[] arr, long k) 
    {
        Map<Long , Integer> map = new HashMap<>();
        int maxLength = 0;

        long sum = 0;

        for (int i = 0; i < arr.length; i++) 
        {
            sum += arr[i];

            if(sum == k) // same asen
            {
                maxLength = Math.max(maxLength, (i + 1));
            }

            long remaining = sum - k;
            if(map.containsKey(remaining)) // key asen 
            {
                int lengthOfSubArray = i  - map.get(remaining);

                maxLength = Math.max(maxLength, lengthOfSubArray);
            }

            if(!map.containsKey(sum)) // key nasen
            {
                map.put(sum, i);
            }
        }
        return maxLength;
    }

    public static void main(String[] args) 
    {
        int[] arr = {1, 2, 3, 1, 1, 1};
        long k = 3;
        System.out.println("Longest subarray length with sum " + k + " is : " + longestSubarrayWithSumK(arr, k));
    }
}
