'use strict'
function main(input) {
  const [s1, s2, s3] = input.split('').map(Number)

  console.log((s1 === 1 ? 1 : 0) + (s2 === 1 ? 1 : 0) + (s3 === 1 ? 1 : 0)

}
main(require('fs').readFileSync('/dev/stdin', 'utf8')); 