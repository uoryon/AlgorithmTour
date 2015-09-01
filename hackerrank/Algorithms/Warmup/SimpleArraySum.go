package main

import (
	"fmt"
)

func main() {
	var n int
	var t int
	fmt.Scanf("%d", &n)
	out := 0
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &t)
		out += t
	}
	fmt.Println(out)
}
