console.log("Hello, World!");

function greet(name) {

    return console.log("Hello," + name + "!!")
}
greet("Johnyyy")

const ArrowFunction = () => {
    return console.log("Hello, Arrow Function!!")
}
ArrowFunction()

let message;
message = "Hello, let variable!!"
console.log(message) // store the string 'Hello' in the variable named message
// alert(message)

// this is a shorter way to declare multiple variables in one line but is not recommended
let name = "Wizard", age = 67, isMagic = true;
console.log(name, age, isMagic) // store the string 'Hello' in the variable named message


// this one works too
let user = 'John'
    , age = 25
    , message = 'Hello';

let message1;

message1 = 'Hello!';

message1 = 'World!'; // value changed


let hello = 'Hello world!';

let message2;

// copy 'Hello world' from hello into message
message2 = hello;
console.log(message2)
console.log(hello)  