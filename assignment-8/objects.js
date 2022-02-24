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