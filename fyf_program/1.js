"use strict"
var var_variable1 = "var variable1";
let let_variable1 = "let variable1";

function func1() {
	console.log("func1");
	return 0;
}
func1();

let obj1 = new Object();

let obj2 = {
	name: "obj2",
	sayName() {
		console.log(this.name);
	}
};
obj2.sayName();

/*

*/

