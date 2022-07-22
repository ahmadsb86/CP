package main
import(
	"fmt"
	"math"
)

func main(){

	//Input
	var inputs [2]int
	fmt.Print("\nNumber: ")
	fmt.Scanf("%d\n", &inputs[0])
	fmt.Print("Length: ")
	fmt.Scanf("%d\n",&inputs[1])
	
	//Output
	dash := "\n----------"
	fmt.Println(dash, "\nFirst Method:")
	oldMethod(inputs[0], inputs[1])
	fmt.Println(dash, "\n", dash, "\nSecond Method:")
	newMethod(inputs[0])
	fmt.Println(dash)g
}

func oldMethod(num, len int){
	for i:=0; i<len; i++{
		fmt.Print(num/pow(10,i) %10)
	}
}

func newMethod(num int){
	var prev int
	for i:=0;;i++{
		if prev==num{
			return
		}else{
			remainder:=((num-prev)/pow(10,i)) %10
			prev += remainder*pow(10,i)
			fmt.Print(remainder)
		}
	}
}




//Inna lillahi wa inna ilayhi raji'un
func pow(base, exp int) int{
	return int(math.Pow(float64(base), float64(exp)))
}