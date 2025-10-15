
// optimal approach
// use moore's algorithm 
/* 
😵‍💫 Naive way:

Sab ke votes count karte jao — A ke kitne, B ke kitne…
But agar votes bahut zyada hain (1 million log!), to slow ho jaata hai 😴

⚡ Smart way = Moore’s Voting Algorithm

Yahan ek smart trick use hoti hai — bina sab count kiye hi majority element find kar lo! 🔥

👣 Step-by-step (Story style)

Soch lo tum ek game referee ho.
Har baar tumhe ek student ka naam milta hai.
Tumhare paas ek “leader” aur ek “count” number hota hai.

1. Pehle student ko leader bana do. (A)
leader = A, count = 1

2. Agla vote aaya —

Agar same leader hai → count++

Agar alag leader hai → count--

3. Agar count == 0 ho gaya →
to leader badal do (next element ko leader bana do)

4. End tak karte raho.
Last mein jo leader bacha — wo majority candidate ho sakta hai!

*/

public class MajorityElementsX 
{
    public static int OptimalApproach(int arr[]) 
    {
        int leader = arr[0];
        int iCount = 0;

        for (int i = 0; i < arr.length; i++) 
        {
            if(arr[i] == leader)
            {
                iCount++;
            }
            else
            {
                iCount--;
            }

            if(iCount == 0) leader = arr[i+1];
        }

        return leader;
    }
    public static void main(String[] args) 
    {
        int arr[] = {2,2,3,3,1,2,2};
        

        int iResult = OptimalApproach(arr);

        System.out.println("Majority element is : "+iResult);
    }
}
