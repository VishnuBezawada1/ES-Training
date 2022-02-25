function add(a,b) {
    return new Promise(resolve => resolve(a+b));
}
function multi(a,b) {
    return new Promise(resolve => resolve(a*b));
}

add(1,2).then(result =>
    multi(result,10).then(value => console.log(value))
);