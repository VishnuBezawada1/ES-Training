/* 1.Write a program that takes a date and prints the day on which the date falls on.

we use Date() object to manupulate the date. there are some get and set methods to access
dates according to our interest.
here I'm using setDate() to setting the custom date and getDay() to get the day of that date.*/

//Input:
//displayDay(24)

//output:
//Thursday


function displayDay(date) {
    const days = ["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"];
    const d = new Date();
    let sec = (d.setDate(date));
    let day = days[d.getDay(sec)];
    console.log(day);
}

displayDay(24);