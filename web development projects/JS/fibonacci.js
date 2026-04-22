function fibonacciNumber(n){
    var arr = [];

    if(n === 1){
        arr = [0];
    }
    else if (n === 2) {
        arr = [0, 1];
    } 
    else {
        arr = [0, 1];

        for (var i = 2; i < n; i++) {
            var next = arr[i - 1] + arr[i - 2];
            arr.push(next);
        }
    }

    return arr;
}
console.log(fibonacciNumber(5));
console.log(fibonacciNumber(1));
console.log(fibonacciNumber(7));