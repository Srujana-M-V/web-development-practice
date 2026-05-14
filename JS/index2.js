function add(num1, num2) {
return num1 + num2;
}
 
function subtract(num1, num2) {
return num1 - num2;
}
 
function multiply(num1, num2) {
return num1 * num2;
}
 
function divide(num1, num2) {
return num1 / num2;
}
 
function calculator(num1, num2, operator) {
return operator(num1, num2);
}
function bellBoy(name,age,clas,place){
    this.name=name;
    this.age=age;
    this.class=clas;
    this.place=place;
}
var bellBoy1=new bellBoy("srujan",20,6,"sagar");
var bellBoy2=new bellBoy("ashwin",6,1,"bangalore");