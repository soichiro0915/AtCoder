'use strict'
function main(input) {
  let a = String(input)
  let s = 0
  for(let i = 0; i < 3; i++){
    a[i] == 1 && s++
  }
  console.log(s)

}
main(require('fs').readFileSync('/dev/stdin', 'utf8')); 