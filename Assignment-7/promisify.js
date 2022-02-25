const util = require('util');
function add(a,b,callback) {
    return callback(null,a+b);
}
function multi(a,b,callback) {
    return callback(null,a*b);
}
var myPromiseAdd = util.promisify(add);
var myPromiseMulti = util.promisify(multi);

async function todo() {
    try {
    const value = await myPromiseAdd(1,2);
    const result = await myPromiseMulti(value,10);
    console.log(result);
    }
    catch (e) {
        console.log(e);
    }
}
todo();

