function loveCalculator(name1, name2){
    var n = Math.floor(Math.random() * 100) + 1;
    return n;
}

var name1 = "ram";
var name2 = "siya";

var b = loveCalculator(name1, name2);

console.log("Love percentage is: " + b + "%");