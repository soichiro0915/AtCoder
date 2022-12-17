"use strict";
function main(input) {
  const inputArray = input.split("\n").map((value) => value);
  const [n, m] = inputArray[0].split(" ").map(Number);
  const uv = inputArray.slice(1, n + 1);
  
}
main(require("fs").readFileSync("/dev/stdin", "utf8"));
