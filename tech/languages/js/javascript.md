### Hoisting
```js
/* Hoisting */

// Functions and variables are stored in memory for an execution context before we execute our code. This is called hoisting.
// Functions are stored with a reference to the entire functions, variables with the var keyword with the value of undefined, and variables with the let and const keyword are stored uninitialized.

console.log(sum(2, 5)); //Since function is stored as reference, it will print 7
console.log(number); // This will throw reference error
console.log(name); // This will be undefined at this point.

function sum(a, b) {
  return a+b;
}

const number = 10;
var name = 'Ravi';
```


### Disadvantages of forEach & why to avoid it

https://community.appsmith.com/content/blog/dark-side-foreach-why-you-should-think-twice-using-it?ref=dailydev

