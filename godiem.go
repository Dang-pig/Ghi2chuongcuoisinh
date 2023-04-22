package main

import (
	"fmt"
)

func main() {
	var cangodiem bool
	for {
		fmt.Print("Enter value for cangodiem (0 or 1): ")
		_, err := fmt.Scanf("%t", &cangodiem)
		if err == nil {
			break
		} else {
			fmt.Println("Invalid input. Please enter 0 or 1.")
		}
	}

	if cangodiem {
		fmt.Println("Ghi full tiêu đề + ghi nhớ 2 chương cuối")
	} else {
		fmt.Println("Ghi full tiêu đề 2 chương cuối")
	}
}
