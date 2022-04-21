'use strict'
function main(input) {
  let [a, b] = input.split(' ')
  
  a * b % 2 == 0 ? console.log('Even'): console.log('Odd')
}
main(require('fs').readFileSync('/dev/stdin', 'utf8')); 