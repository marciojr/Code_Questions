package main
 
import (
    "fmt"
)
 
func main() {
 
    var name string
    var alphabet_count int
 
    fmt.Scanf("%s", &name)
    fmt.Scanf("%d", &alphabet_count)
 
    fmt.Printf("The word %s containing %d number of alphabets.", 
               name, alphabet_count)
}
