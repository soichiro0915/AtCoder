"use strict";
function main(input) {
  const [n, s] = input.split("\n");
  let count = 0;
  const ans = s.split("").map((element) => {
    if (element === '"') {
      count++;
      return element;
    } else {
      if (count % 2 === 0 && element === ",") {
        return ".";
      } else {
        return element;
      }
    }
  });

  console.log(ans.join(""));
}
main(require("fs").readFileSync("/dev/stdin", "utf8"));
