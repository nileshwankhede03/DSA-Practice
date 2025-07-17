
function SumFactor(no)
{
    let sum = 0
    for(let i = 1 ; i <= (no/2);i++)
    {
        if(no % i == 0)
        {
            sum += i;
        }
    }
    return sum
}

let value = 12
let res = 0
res = SumFactor(value)
console.log("Summation of Factor is : "+res);
