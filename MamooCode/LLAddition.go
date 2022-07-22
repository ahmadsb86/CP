package main

import (
	"fmt"
	"math"
)

//Linked list structs
type node struct {
	val int
	nxt *node
}
type list struct{
	head *node
	idx *node
	size int
	traversed bool
}



func main(){

	//Init two lists
	lists := [2]list{}

	//Input values for LLs
	var inp [2]int
	for i:=range lists{	//Prompt
		fmt.Printf("Enter digits for LL #%d: ", i+1)
		fmt.Scanf("%d\n", &inp[i])
	}

	//Reverse numbers and put them in LL
	for lst, num := range inp{
		var prev int
		for i:=0;;i++{
			if prev==num{
				break
			}else{
				remainder:=((num-prev)/pow(10,i)) %10
				prev += remainder*pow(10,i)
				lists[lst].addNode(remainder)
			}
		}
	}
	
	//Compute result
	result := list{}
	carry := 0
	for i,j:=lists[0].InitTraverse(),lists[1].InitTraverse(); !lists[0].traversed || !lists[1].traversed; i,j=lists[0].traverse(),lists[1].traverse(){
		sum := i+j+carry
		result.addNode((sum)%10)
		carry = 0
		if(sum>10){
			carry = 1
		}
	}
	if carry == 1{
		result.addNode(1)
	}

	//Output result
	fmt.Print("Reversed resultant LL: ")
	result.dispList()


}


//LL util functions
func (ll *list) addNode(input int) {
	s := &node{val: input}
	ll.size++
	if ll.head == nil {
		ll.head = s
		ll.idx = ll.head
	} else {
		(*ll.idx).nxt = s
		ll.idx = s
	}
}

func (ll *list) dispList(){
	for i:=ll.InitTraverse(); !ll.traversed; i=ll.traverse(){
		fmt.Print(i)
	}
}

func (ll *list) InitTraverse() int{
	ll.traversed = false
	ll.idx = ll.head
	return (*ll.idx).val
}

func (ll *list) traverse() int{
	x:=0
	if((*ll.idx).nxt!=nil){
		ll.idx = (*ll.idx).nxt
		x = (*ll.idx).val
	}else{
		ll.traversed = true
	}
	return x 
}


//Inna lillahi wa inna ilayhi raji'un
func pow(base, exp int) int{
	return int(math.Pow(float64(base), float64(exp)))
}