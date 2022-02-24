function displayDay(year,month,date) {
    const d = new Date();
    const days = ["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"];
    let sec = d.setFullYear(year,month-1,date);
    let day = days[d.getDay(sec)];
    console.log(day);
}

displayDay(1999,10,19);