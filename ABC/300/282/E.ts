"use strict";
function main(input) {
  const [input1, input2] = input.split("\n");
  const [n, m] = input1.split(" ").map(Number);
  let a = input2.split(" ").map(Number);

  a.sort((a, b) => {
    return a < b ? 1 : -1;
  });
  let ans = 0;
  for (let i = 0; i < n - 1; i++) {
    ans += (a[0] ** a[1] + a[1] ** a[0]) % m;
    a.splice(0, 1);
  }
  console.log(ans);
}
main(require("fs").readFileSync("/dev/stdin", "utf8"));
