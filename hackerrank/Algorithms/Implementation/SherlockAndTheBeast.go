package main

import (
	"fmt"
	"time"
)

func makeTimestamp() int64 {
	return time.Now().UnixNano() / int64(time.Millisecond)
}

func main() {
	var t int
	var n int
	a := []int{1, 3, 5, 11, 19, 100000}
	t = 6
	t1 := makeTimestamp()
	// fmt.Scanf("%d", &t)
	for i := 0; i < t; i++ {
		// fmt.Scanf("%d", &n)
		n = a[i]
		k := 0
		flag := false
		for k = n - (n % 3); k >= 0; k -= 3 {
			if k%3 == 0 && (n-k)%5 == 0 {
				flag = true
				break
			}
		}
		if flag == false {
			fmt.Println("-1")
			continue
		} else {
			for i := 0; i < k; i++ {
				fmt.Printf("5")
			}
			for i := 0; i < n-k; i++ {
				fmt.Printf("3")
			}
		}

		fmt.Printf("\n")
	}
	t2 := makeTimestamp()
	fmt.Println(t2 - t1)
}
