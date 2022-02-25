function number(value) {
    return value;
}
function add(a,b,callback) {
    return callback(a+b);
}
function multy(a,b,callback) {
    return callback(a*b);
}
var multi = multy(add(2,2,number),10,number);
console.log('The number is : '+number(multi));
