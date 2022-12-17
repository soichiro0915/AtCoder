'use strict'
function main(input) {
  console.log(input.split(' '))
  const [num, lines] = input.split('\n')
  let numbers = lines.split(' ').map(Number)

}
main(require('fs').readFileSync('/dev/stdin', 'utf8')); 