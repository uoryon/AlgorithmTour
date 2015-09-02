package main

import (
	"fmt"
	"strconv"
)

func main() {
	var time int
	fmt.Scanf("%d", &time)
	for time > 0 {
		time--
		var in string

		fmt.Scanf("%s", &in)

		num, _ := strconv.ParseInt(in, 10, 64)
		count := 0

		for _, r := range in {
			c := string(r)
			if c == "0" {
				continue
			}
			n, _ := strconv.ParseInt(c, 10, 64)
			if num%n == 0 {
				count++
			}
		}
		fmt.Println(count)

	}
	return
}
