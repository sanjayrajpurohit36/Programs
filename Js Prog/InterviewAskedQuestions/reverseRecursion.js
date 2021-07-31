/*
    Asked in *Jio* Interview
    Reverse a string using recurssion
*/
/**
 *
 * @param {string} str input string
 * @param {Integer} ln length of input string
 * @param {string} ans resultant string
 * @returns {string}
 */
function reverse(str, ln, ans = "") {
	if (ln == 0) return ans;
	else {
		ans += str[ln - 1];
		ans = reverse(str, ln - 1, ans);
	}
	return ans;
}

let str = "marmar"; // ramram
console.log(reverse(str, str.length));
