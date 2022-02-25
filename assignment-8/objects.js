//5. Write a function that takes object as input and prints all keys and values in a valid JSON format

//input:
//displayJSON("BMW","x5","2022","petrol")

//output:
//{"brand":"BMW","model":"x5","year":"2022","fuelType":"petrol"}

function car(brand,model,year,fuelType) {
    this.brand = brand;
    this.model = model;
    this.year = year;
    this.fuelType = fuelType;
}
function displayJSON(brand,model,year,fuelType) {
    const tata = new car(brand,model,year,fuelType);
    const myJSON = JSON.stringify(tata);
    console.log(myJSON);
}
displayJSON("BMW","x5","2022","petrol");