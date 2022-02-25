/* 1.Write a program that takes a date and prints the day on which the date falls on.

we use Date() object to manupulate the date. there are some get and set methods to access
dates according to our interest.
here I'm using setFullYear() to setting the custom date with the arguments of year,month,date 
and getDay() to get the day of that date.*/

//input:
//displayDay(1999,10,9)

//output:
//Tuesday

function displayDay(year,month,date) {
    const d = new Date();
    const days = ["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"];
    let sec = d.setFullYear(year,month-1,date);
    let day = days[d.getDay(sec)];
    console.log(day);
}

displayDay(1999,10,19);