const arr = [1,2,3,4,5,6,7];
arr.splice(2,0,8,9,10); // array.splice(position,howmanytoremove,add1,add2,....addx);
console.log(arr);
console.log("returns the removed values");
console.log(arr.splice(0,2)); //for removing
console.log(arr);
