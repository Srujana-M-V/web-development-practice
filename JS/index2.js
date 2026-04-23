var twitter = "This is my tweet for testing JavaScript character limit";

var tweet = twitter.slice(0, 140);
var remaining = 140 - twitter.length;

console.log("Tweet: " + tweet);
console.log("Characters left: " + remaining);