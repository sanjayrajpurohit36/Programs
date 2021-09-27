class Sum {
	constructor() {
		this.sum = 0;
	}

	add(a, b) {
		this._data = a + b;
	}

	getSum() {
		return this._data;
	}
}

const instance = new Sum();

instance.add(1, 2);
console.log(instance.getSum());

Object.freeze(instance);
