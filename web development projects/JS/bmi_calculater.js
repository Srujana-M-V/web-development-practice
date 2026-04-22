function bmiCalculator(weight, height){
var bmi=(weight/(height*height))
return bmi;}
var a = bmiCalculator(43, 1.5);

console.log("BMI is " + a.toFixed(2));

if (a < 18.5) {
    console.log("Underweight");
} else if (a <= 24.9) {
    console.log("Normal");
} else {
    console.log("Overweight");
}
