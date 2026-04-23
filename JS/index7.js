var names = ["srujana","sanni","munni","gova"];

function whosPaying(names) {
    var randomIndex = Math.floor(Math.random() * names.length);
    var person = names[randomIndex];
    return person + " is going to buy lunch today!";
}

whosPaying(names);