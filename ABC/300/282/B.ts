"use strict";
function main(input) {
  const inputArray = input.split("\n").map((value) => value);
  const [n, m] = inputArray[0].split(" ").map(Number);
  const s = inputArray.slice(1, n + 1);

  let count = 0;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      let countS = 0;
      for (let k = 0; k < m; k++) {
        if (s[i][k] === "o" || s[j][k] === "o") {
          countS++;
        }
      }
      if (countS === m) {
        count++;
      }
    }
  }
  console.log(count);
}
main(require("fs").readFileSync("/dev/stdin", "utf8"));
