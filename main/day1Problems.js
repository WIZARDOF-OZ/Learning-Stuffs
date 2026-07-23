// problem 1
const isEven = (num) => {
    if (Number.isNaN(num)) return console.log("Please enter a valid number")
    if (num % 2 === 0) {
        return true
        return console.log("The number is even")
    } else {
        return false
        return console.log("The number is odd")
    }
}

isEven(4) // true
isEven(7) // false

// Alternate way using tineray operator

let number = prompt("Enter a number to check if it is even or odd: ");
let type = (number % 2 === 0) ? "even" : "odd";
console.log(`The number ${number} is ${type}`)


// Implicit type Coercion

console.log("5" + 3); // converts "5" to a string and concatenates it with 3, resulting in "53"
console.log("5" - 3); // converts "5" to a number and subtracts 3, resulting in 2
console.log("5" * 3); // converts "5" to a number and multiplies it by 3, resulting in 15
console.log("5" / 3); // converts "5" to a number and divides it by 3, resulting in approximately 1.6667
console.log(true + true); // converts true to 1 and adds it to another true (1), resulting in 2
console.log(true + false); // converts true to 1 and false to 0, resulting in 1
console.log([] + []); // converts both empty arrays to empty strings and concatenates them, resulting in an empty string ""
console.log([] + {}); // converts the empty array to an empty string and the empty object to "[object Object]", resulting in "[object Object]"
console.log({} + []); // converts the empty object to "[object Object]" and the empty array to an empty string, resulting in "[object Object]"
// (Fun fact: if you reverse it and do {} + [] in some browser consoles, you might get 0 because it interprets the {} as an empty code block instead of an object, leaving just +[] which coerces to 0!)

// Problem 2
// print numbers from 1 to 50
for (number = 1; number <= 50; number++) {
    console.log(number)
}

// problem 3
// print numbers from 10 to 1
let num = 10;
while (num > 1) {

    console.log(num--)
}
console.log("Blast OFFF")


// problem 4
let totalNumber = 0;
for (i = 1; i <= 100; i++) {
    totalNumber += i;
}


// problem 5
for (i = 1; i <= 50; i++) {
    if (i % 3 === 0) {
        console.log("Fizz")
    }
    else if (i % 5 === 0) {
        console.log("Buzz")
    } else if (i % 3 === 0 && i % 5 === 0) {
        console.log("FizzBuzz")
    }
}

// problem 6

for (let i = 1; i <= 10; i++) {
    const result = i * 7
    console.log(`${i} * 7 = ${result}`)
}

// problem 7
let n = 84692;
let maxDigit = 0; // 1. Create a tracker variable

while (n > 0) {
    let digit = n % 10;

    if (digit > maxDigit) {
        maxDigit = digit; // 2. Update tracker if current digit is larger
    }

    n = Math.floor(n / 10);
}

console.log(maxDigit); // 3. Print the final result (Output: 9)

// problem 8

let name = "Hello";
let reverseName = "";
for (let i = name.length - 1; i >= 0; i--) {
    reverseName += name[i];
}
console.log(reverseName); // Output: "olleH"