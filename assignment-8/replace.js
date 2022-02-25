//4. Demonstrate replace all occurrences of a string within a sentence.

const txt = "hello hello this is hello";
//if we use only replace it will change first occurrence.
//example:
console.log(txt.replace("hello","hi"));
//To replace all matches, use a regular expression with a /g flag (global match).
//example:
console.log(txt.replace(/hello/g,"hi"));

//output:
//hi hi this is hi.