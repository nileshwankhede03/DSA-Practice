
// Array is sorted in ascending order 
// Remove Duplicate from this sorted Array in place
// Without using Extra space
// output : 21 35 47 56 68
// 1.Array is sorted &&  Duplicate (keywords) so use 2 pointer
// inner while madhe question chi opposite condition yenar
// Note : i (slow pointer) && j (fast pointer)
// i increments in a favour only (question chi condition (here unique)).
// in-place : 1. overwrite value 2.swap values 

public class RemoveDuplicateInplace 
{
    public static void RemoveDuplicate(int[] arr) 
    {
        int i = 0 , j = 1;
        int n = arr.length;

        while (j < n) 
        {
            if (arr[i] != arr[j]) 
            {
                i++;
                arr[i] = arr[j];
            }

            if(arr[i] == arr[j])
            {
                j++;
            }
        }
    }
    public static void main(String[] args) 
    {
        int arr[] = {21,35,35,47,47,56,68};

        RemoveDuplicate(arr);

        for (int j2 = 0; j2 < arr.length - 2; j2++) 
        {
            System.out.print(arr[j2]+" ");
        }

        System.out.println();
    }
}