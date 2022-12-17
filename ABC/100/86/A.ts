'use strict'
function main(input) {
  const [a, b] = input.split(' ').map(Number)

  if(a * b % 2 === 0) {
    console.log('Even')
  } else {
    console.log('Odd')
  }

}
main(require('fs').readFileSync('/dev/stdin', 'utf8')); 