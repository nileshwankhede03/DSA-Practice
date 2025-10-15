
// brute force

public class SortArrayWith012 
{
    public static void SortArrayWithZeroOneAndTwo(int arr[])
    {
        int iCnt0 = 0;
        int iCnt1 = 0;
        int iCnt2 = 0;

        for (int i = 0; i < arr.length; i++) {
            if(arr[i] == 0)
            {
                iCnt0++;
            }
            else if(arr[i] == 1)
            {
                iCnt1++;
            }
            else
            {
                iCnt2++;
            }
        }

        for (int i = 0; i < iCnt0; i++) {
            arr[i] = 0;
        }

        for (int i = iCnt0; i < iCnt0 + iCnt1; i++) {
            arr[i] = 1;
        }

        for (int i = iCnt0 + iCnt1; i < arr.length; i++) {
            arr[i] = 2;
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]+" ");
        }

        System.out.println();
    }
    public static void main(String[] args) 
    {
        int arr[] = {0,1,2,0,1,2,1,2,0,0,0,1};

        SortArrayWithZeroOneAndTwo(arr);
    }
}