function* func() {
    yield 5
    yield 7
}
    
const a = func()
const b = func()

a.next()
a.next()
console.log(b.next())