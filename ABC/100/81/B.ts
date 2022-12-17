'use strict'
function main(input) {
  const [num, lines] = input.split('\n')
  const A = lines.split(' ').map(Number)
  let count = 0
  let flag = true
  while(flag) {
    for(let i = 0; i < A.length; i++) {
      if(A[i] % 2 === 0) {
        A[i] = A[i] / 2
      } else {
        flag = false
        break
      }
    }
    if(flag) {
      count++
    }
  }

}
main(require('fs').readFileSync('/dev/stdin', 'utf8')); 