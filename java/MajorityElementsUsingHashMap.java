
import java.util.*;

public class MajorityElementsUsingHashMap 
{
    public static int majorityElement(int[] arr) 
    {
        Map<Integer, Integer> map = new HashMap<>();

        // Count frequency of each element && all values HashMap madhe taklya
        for (int num : arr) 
        {
            map.put(num, map.getOrDefault(num, 0) + 1);
        }

        // Check which element occurs more than n/2 times & yane key and value ghetlya jatat and logic lihla jate.
        for (Map.Entry<Integer, Integer> entry : map.entrySet()) 
        {
            if (entry.getValue() > arr.length / 2) 
            {
                return entry.getKey();
            }
        }

        return -1; // No majority element
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) 
        {
            arr[i] = sc.nextInt();
        }

        System.out.println(majorityElement(arr));
    }
}
