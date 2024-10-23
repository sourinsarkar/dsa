package main

import "fmt"

func merge(arr[] interface{}, low int, mid int, high int) {
	var tempArray [] interface{}

	left := low
	right := mid + 1

	for left <= mid && right <= high {
		if arr[left].(int) <= arr[right].(int) {
			tempArray = append(tempArray, arr[left])
			left++
			} else {
				tempArray = append(tempArray, arr[right])
				right++
			}
		}
		
	for left <= mid {
		tempArray = append(tempArray, arr[left])
		left++
	}

	for right <= high {
		tempArray = append(tempArray, arr[right])
		right++
	}

	for i, item := range tempArray {
		arr[low + i] = item
	}
}

func mergeSortPartial(arr [] interface{}, low int, high int) {
	if low == high {
		return
	}

	mid := (low + high) / 2
	mergeSortPartial(arr, low, mid)
	mergeSortPartial(arr, mid + 1, high)

	merge(arr, low, mid, high)
}

func mergeSort(arr [] interface{}, n int) {
	mergeSortPartial(arr, 0, n-1)
}

func main() {
	var inputArray = [...]int{20,40,49,12,90,23,32}
	inputItems := make([] interface{}, len(inputArray))

	for index, item := range inputArray {
		inputItems[index] = item
	}

	mergeSort(inputItems, len(inputArray))

	for _, item := range inputItems {
		fmt.Print(item, " ")
	}
	fmt.Println()
}