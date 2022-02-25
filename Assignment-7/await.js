function add(a,b) {
    return new Promise(resolve => resolve(a+b));
}

function multi(a,b) {
    return new Promise(resolve => resolve(a*b));
}

async function toDo() {
    try {
    const value = await add(2,2);
    console.log(`This is addition value: ${value}`);
    const result = await multi(value,10);
    console.log(`This is the result : ${result}.`);
    }
    catch (err) {
        console.log(err);
    }
}

toDo();