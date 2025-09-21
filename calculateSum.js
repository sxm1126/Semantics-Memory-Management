function calculateSum(arr) {
    let total = o;        // ReferenceError at runtime: o is not defined
    for (let num of arr) { total += num; }
    return total;
}

let numbers = [1, 2, 3, 4, 5];
let result = calculate Sum (numbers); // SyntaxError: Unexpected identifier 'Sum'
console.log("Sum in JavaScript:", result);
