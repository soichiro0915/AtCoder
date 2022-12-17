package main

import (
	"fmt"
	"sort"
)

func main(){
	var n [5]int
	fmt.Scanf("%d %d %d %d %d",&n[0],&n[1],&n[2],&n[3],&n[4])
	s := n[:]
	sort.Ints(s)
	if(s[0] == s[1] && s[3] == s[4]){
		if(s[2] == s[0] || s[2] == s[4]){
			fmt.Println("Yes")
			return
		}
	}
	fmt.Println("No")
}