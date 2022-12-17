"use strict";
function main(input) {
  const [K] = input.split("\n");
  const alpahbet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  console.log(alpahbet.slice(0, K));
}
main(require("fs").readFileSync("/dev/stdin", "utf8"));
