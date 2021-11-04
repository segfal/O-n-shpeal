package main // import "github.com/golang/lint/test"
import "fmt"


//Constant time
//O(1)
func constantTime(x int) int {
	return x
}


//Linear time
//O(n)
func linearTime(x int) int {
	for i := 0; i < x; i++ {
		//do something
	}
	return x
}


//Quadratic time
//O(n^2)
func quadraticTime(x int) int {
	for i := 0; i < x; i++ {
		for j := 0; j < x; j++ {
			//do something
		}
	}
	return x
}


//Logarithmic time
//O(log n)
func logarithmicTime(x int) int {
	for i := 0; i < x; i/=2 {
		//do something
	}
	return x;
}


func code(){
	//Constant time
	//O(1)
	constantTime(10)
	//O(n)
	linearTime(10)
	//O(n^2)
	quadraticTime(10)
	//O(log n)
	logarithmicTime(10)

}

func main(){
	code()
}
