
let num = 0.1 + 0.2

console.log(typeof(num.toFixed(1)));
console.log(parseFloat(num.toFixed(1)));

switch(parseFloat(num.toFixed(1)))
{
    case 0.3  :
        console.log("ummm.. DONE bhai")
        break;

    case 0.5 : 
        console.log("ummm.. nahi hai..")
        break;

    default : 
        console.log("Invalid ahe re baba")
}