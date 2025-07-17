
function Summation(Arr)
{
    let iSum = 0;
    for(let i = 0 ; i < Arr.length;i++)
    {
        iSum += Arr[i]
    }
    return iSum
}

Arr = [11,21,51,101,111,121]
let res = 0
res = Summation(Arr)
console.log("Addition is : "+res);
