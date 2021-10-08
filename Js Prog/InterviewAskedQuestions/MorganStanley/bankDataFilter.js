/*
    You're given acctData of bank customers and their balance info in balance Object
    You need to write an program which gives the correct filtered Result 
	Take the below written test cases
	T1: main("Bob", "", "")
	T2: main("Charlie", "", "")
	T3: main("", "acctNum", "")
	T4: main("Alice", "balance", "asc")
	
	Create a main function that accepts 3 params (name, filterBy, filterDirection)
	name: Account Holder Name
	filterBy: It can have two inputs
			1. "acctNum" for filtering by acctNum
			2. "balance" for filtering by account balance
	filterDirection: It can also have two inputs
			1. "asc": for filtering in ascending order
			2. "desc": for filtering in descending order	
*/
acctData = [
	{
		acctNum: "A1234",
		user: "Alice",
		openData: "4/5/89",
	},
	{
		acctNum: "A5231",
		user: "Bob",
		openData: "4/5/11",
	},
	{
		acctNum: "A9921",
		user: "Alice",
		openData: "4/5/19",
	},
	{
		acctNum: "A8191",
		user: "Alice",
		openData: "4/5/19",
	},
];

balance = {
	A1234: 4593.22,
	A9921: 0,
	A5321: 2123123.5,
	A8191: 4344,
};

function main(user, sortBy, sortDirection) {
	let result = acctData;
	if (user) result = result.filter((data) => data.user == user);
	if (sortBy == "acctNum") {
		result = result.sort(function (a, b) {
			if (sortDirection == "asc") return ("" + a.acctNum).localeCompare("" + b.acctNum);
			else return ("" + b.acctNum).localeCompare("" + a.acctNum);
		});
	} else if (sortBy == "balance") {
		result = result.sort(function (a, b) {
			if (sortDirection == "asc") return balance[a.acctNum] - balance[b.acctNum];
			else if (sortDirection == "desc") return balance[b.acctNum] - balance[a.acctNum];
		});
	}
	return result;
}

console.log(main("Bob", "", ""));
console.log(main("Charlie", "", ""));
console.log(main("", "acctNum", ""));
console.log(main("Alice", "balance", "asc"));
