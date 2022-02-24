function displayDay(date) {
    const days = ["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"];
    const d = new Date();
    let sec = (d.setDate(date));
    let day = days[d.getDay(sec)];
    console.log(day);
}

displayDay(24);