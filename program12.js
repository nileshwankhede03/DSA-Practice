
function Maximum(Arr)
{
    let max = Arr[0];
    for(let i = 0 ; i < Arr.length;i++)
    {
        if(Arr[i] > max)
        {
            max = Arr[i];
        }
    }
    return max
}

Arr = [78,45,90,32,66,40]
let res = 0
res = Maximum(Arr)
console.log("Maximum is : "+res);
